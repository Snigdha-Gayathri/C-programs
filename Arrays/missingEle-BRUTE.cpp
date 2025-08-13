#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_set<int> elements; // To store elements for quick lookup
    
    // Store all elements in a set
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            elements.insert(arr[i]);
        }
    }
    
    // Find the first missing positive integer
    int missingElement = 1; // Start checking from 1
    while (elements.find(missingElement) != elements.end()) {
        missingElement++;
    }
    
    cout << "The missing element is: " << missingElement << endl;
    return 0;
}