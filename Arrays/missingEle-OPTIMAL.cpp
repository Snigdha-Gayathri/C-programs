#include <iostream>
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
    
    
    int sum = (n + 1) * (n + 2) / 2; 
    int s2 = 0;
    
    
    for (int i = 0; i < n; i++) {
        s2 += arr[i];
    }
    
   
    int missing = sum - s2;
    cout << "The missing element is: " << missing << endl;
    
    return 0;
}