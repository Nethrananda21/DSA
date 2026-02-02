#include<iostream>
using namespace std;

int print(int x, int n){
    if(n==0) return 1;
    return x * print(x, n-1);
}

int fib(int n){
    if (n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+fib(n-2);
}

bool isSorted(int arr[], int n) {
    if (n <= 1) return true;
    if (arr[0] > arr[1]) return false;
    return isSorted(arr + 1, n - 1);
}

int SUM(int arr[],int n){
    if(n==0) return 0; 
    return arr[n-1]+SUM(arr,n-1);
}

int Find(int arr[], int n, int key){
    if(n==0) return -1;
    if(arr[0]==key) return n;
    return Find(arr+1,n-1,key);
}

int binarySearch(int arr[], int target, int left, int right) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, target, mid + 1, right);
    else return binarySearch(arr, target, left, mid - 1);
}

int main(){
    
    int arr[]={1,2,3,4,5};
    cout<<binarySearch(arr,4,0,4);
    
}


