#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    unordered_map<int, bool> hash;
    
    for (int i = 0; i < n; i++) {
        hash[arr[i]] = true;
    }
    
    int missing;
    for (int i = 1; i <= n + 1; i++) {
        if (hash.find(i) == hash.end()) {
            missing = i;
            break;
        }
    }
    
    cout << "The missing element is: " << missing << endl;
    return 0;
}