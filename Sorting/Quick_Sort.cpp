#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array on the basis of pivot element
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    int j = low;

    while(j<high){
        if(arr[j]<pivot){
            i++;
            swap(arr[j], arr[i]);
        }
        j++;
    }

    swap(arr[i+1], arr[high]);
    return (i+1);
}


void quickSort(vector<int>& arr, int low, int high) {
    if(low<high){
        int x = partition(arr, low, high);

        quickSort(arr, low, x-1);
        quickSort(arr, x+1, high);
    }
}

// Driver code to test the implementation
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Running Quick Sort
    quickSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
