#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    
    int* a = new int[n1];
    int* b = new int[n2];

   
    for (int i = 0; i < n1; i++) {
        a[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }

  
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    
    while (i < n1) {
        arr[k++] = a[i++];
    }

    
    while (j < n2) {
        arr[k++] = b[j++];
    }

    delete[] a;
    delete[] b;
}

void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; 
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    delete[] arr; 
    return 0;
}