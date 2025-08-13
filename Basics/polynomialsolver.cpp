#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <iomanip>

// Simple JSON parser for our specific format
class SimpleJSONParser {
public:
    static std::map<int, std::pair<int, std::string>> parseCoordinates(const std::string& filename) {
        std::ifstream file(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open file: " + filename);
        }
        
        std::string content((std::istreambuf_iterator<char>(file)),
                           std::istreambuf_iterator<char>());
        
        std::map<int, std::pair<int, std::string>> coordinates;
        
        // Look for numeric keys (skip the "keys" object)
        size_t pos = 0;
        while (pos < content.length()) {
            // Find next quote
            size_t keyStart = content.find('"', pos);
            if (keyStart == std::string::npos) break;
            keyStart++;
            
            size_t keyEnd = content.find('"', keyStart);
            if (keyEnd == std::string::npos) break;
            
            std::string keyStr = content.substr(keyStart, keyEnd - keyStart);
            
            // Skip non-numeric keys (like "keys", "n", "k", "base", "value")
            if (keyStr == "keys" || keyStr == "n" || keyStr == "k" || 
                keyStr == "base" || keyStr == "value") {
                pos = keyEnd + 1;
                continue;
            }
            
            // Try to parse as integer (coordinate key)
            try {
                int x = std::stoi(keyStr);
                
                // Find the corresponding value object
                size_t colonPos = content.find(':', keyEnd);
                if (colonPos == std::string::npos) break;
                
                size_t valueStart = content.find('{', colonPos);
                if (valueStart == std::string::npos) break;
                
                size_t valueEnd = content.find('}', valueStart);
                if (valueEnd == std::string::npos) break;
                
                std::string valueObject = content.substr(valueStart, valueEnd - valueStart + 1);
                
                // Extract base
                size_t baseStart = valueObject.find("\"base\"");
                if (baseStart == std::string::npos) {
                    pos = valueEnd + 1;
                    continue;
                }
                
                baseStart = valueObject.find(':', baseStart) + 1;
                while (baseStart < valueObject.length() && 
                       (valueObject[baseStart] == ' ' || valueObject[baseStart] == '"')) {
                    baseStart++;
                }
                
                size_t baseEnd = baseStart;
                while (baseEnd < valueObject.length() && 
                       valueObject[baseEnd] != ',' && valueObject[baseEnd] != '"' && 
                       valueObject[baseEnd] != '}') {
                    baseEnd++;
                }
                
                int base = std::stoi(valueObject.substr(baseStart, baseEnd - baseStart));
                
                // Extract value
                size_t valStart = valueObject.find("\"value\"");
                if (valStart == std::string::npos) {
                    pos = valueEnd + 1;
                    continue;
                }
                
                valStart = valueObject.find(':', valStart) + 1;
                while (valStart < valueObject.length() && 
                       (valStart < valueObject.length() && (valueObject[valStart] == ' ' || valueObject[valStart] == '"'))) {
                    valStart++;
                }
                
                size_t valEnd = valStart;
                while (valEnd < valueObject.length() && 
                       valueObject[valEnd] != '"' && valueObject[valEnd] != '}') {
                    valEnd++;
                }
                
                std::string value = valueObject.substr(valStart, valEnd - valStart);
                
                coordinates[x] = {base, value};
                pos = valueEnd + 1;
                
            } catch (const std::exception&) {
                // Not a numeric key, skip
                pos = keyEnd + 1;
            }
        }
        
        return coordinates;
    }
};

// Convert from given base to decimal - using long double for better precision
long double baseToDecimal(const std::string& value, int base) {
    long double result = 0.0;
    long double power = 1.0;
    
    for (int i = value.length() - 1; i >= 0; i--) {
        char digit = value[i];
        int digitValue;
        
        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0';
        } else if (digit >= 'A' && digit <= 'Z') {
            digitValue = digit - 'A' + 10;
        } else if (digit >= 'a' && digit <= 'z') {
            digitValue = digit - 'a' + 10;
        } else {
            throw std::invalid_argument("Invalid character in number");
        }
        
        if (digitValue >= base) {
            throw std::invalid_argument("Digit value exceeds base");
        }
        
        result += digitValue * power;
        power *= base;
    }
    
    return result;
}

// Lagrange interpolation to find polynomial value at x=0 (which gives us constant 'c')
long double lagrangeInterpolation(const std::vector<std::pair<int, long double>>& points, int x) {
    long double result = 0.0;
    int n = points.size();
    
    for (int i = 0; i < n; i++) {
        long double term = points[i].second; // y_i
        
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (long double)(x - points[j].first) / (points[i].first - points[j].first);
            }
        }
        
        result += term;
    }
    
    return result;
}

int main() {
    try {
        std::string filename;
        std::cout << "Enter JSON filename: ";
        std::cin >> filename;
        
        // Add .json extension if not provided
        if (filename.find('.') == std::string::npos) {
            filename += ".json";
        }
        
        // Parse coordinates from JSON
        auto coordinatesMap = SimpleJSONParser::parseCoordinates(filename);
        
        std::cout << "Found " << coordinatesMap.size() << " coordinate points." << std::endl;
        
        if (coordinatesMap.size() < 3) {
            std::cerr << "Error: Need at least 3 points for polynomial interpolation" << std::endl;
            return 1;
        }
        
        // Convert to decimal and store as points
        std::vector<std::pair<int, long double>> points;
        
        std::cout << "\nDecoded coordinates:" << std::endl;
        for (const auto& coord : coordinatesMap) {
            int x = coord.first;
            int base = coord.second.first;
            std::string encodedY = coord.second.second;
            
            long double y = baseToDecimal(encodedY, base);
            points.push_back({x, y});
            
            std::cout << "(" << x << ", " << std::fixed << std::setprecision(0) << y 
                      << ") [from base " << base << ": " << encodedY << "]" << std::endl;
        }
        
        // Use Lagrange interpolation to find the constant term 'c'
        // The constant term is the value of the polynomial at x = 0
        long double c = lagrangeInterpolation(points, 0);
        
        std::cout << "\nUsing Lagrange interpolation:" << std::endl;
        std::cout << "The constant 'c' = " << std::fixed << std::setprecision(0) << c << std::endl;
        
        // For verification, show a few polynomial values
        std::cout << "\nVerification - First few polynomial values:" << std::endl;
        for (int i = 0; i < std::min(5, (int)points.size()); i++) {
            const auto& point = points[i];
            long double calculated = lagrangeInterpolation(points, point.first);
            std::cout << "f(" << point.first << ") = " << std::fixed << std::setprecision(0) 
                      << calculated << " (expected: " << point.second << ")" << std::endl;
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}