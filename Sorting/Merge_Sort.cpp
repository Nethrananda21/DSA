



#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n = mid-left+1;
    int m = right - mid;

    vector<int>L, R;

    for(int i=left; i<left+n; i++){
        L.push_back(arr[i]);
    }
    for(int i=mid+1;i<mid+m+1;i++){
        R.push_back(arr[i]);
    }

    int l=0, r=0, k=left;
    while(l<n && r<m){
        if(L[l]<=R[r]){
            arr[k]=L[l];
            l++;
        }

        else{
            arr[k]=R[r];
            r++;
        }
        k++;
        
    }

    while(l<n){
        arr[k] = L[l];
        k++;
        l++;
    }
    while(r<m){
        arr[k] = R[r];
        k++;
        r++;
    }
}


void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left+(right-left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    merge(arr, left, mid, right);
}


int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}



