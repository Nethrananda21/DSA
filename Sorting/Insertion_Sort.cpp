#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& arr) {
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            int j=i;
            int key=arr[j];
            while(j>0 && arr[j-1]>key){
                arr[j]=arr[j-1];
                j--;
            }
            arr[j]=key;
        }
    }
};


void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> arr1 = {64, 25, 12, 22, 11};
    cout << "Original array 1: ";
    printArray(arr1);
    
    sol.selectionSort(arr1);
    
    cout << "Sorted array 1:   ";
    printArray(arr1);
    cout << "---------------------------" << endl;

    // Test Case 2 (Already sorted)
    vector<int> arr2 = {1, 2, 3, 4, 5};
    cout << "Original array 2: ";
    printArray(arr2);
    
    sol.selectionSort(arr2);
    
    cout << "Sorted array 2:   ";
    printArray(arr2);
    
    return 0;
}