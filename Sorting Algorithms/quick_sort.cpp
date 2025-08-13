#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1; 
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j; 
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1); 
        qs(arr, pIndex + 1, high); 
    }
}

int main() {
    cout << "Enter the number of elements: " << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    qs(arr, 0, n - 1); 

    cout << "The sorted array is: " << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}