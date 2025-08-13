#include <iostream>
using namespace std;

int largestEleFinder(int arr[], int n) {

    int largestEle = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largestEle) {
            largestEle = arr[i];
        }
    }
    return largestEle;
    
}

int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest=largestEleFinder(arr, n);
    int slargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]<largest)//works for arr[i]!=largest also
        {
            slargest=arr[i];
        }
    }
    cout<<"The second largest element in the array is: "<<endl;
    cout<<slargest<<endl;
    
    return 0;
}