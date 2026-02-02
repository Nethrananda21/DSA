#include<iostream>
using namespace std;

bool ispresent(int arr[][100], int key, int n, int m) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key) return true;
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int maxi=0;
    int idx;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=0;j<m;j++){
    //         sum+=a[j][i];
    //     }
    //     if(sum>maxi){
    //         idx=i;
    //     }
        
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i%2!=0) cout<<a[m-j-1][i];
    //         else cout<<a[j][i];
    //     }
    //     cout<<endl;
    // }

    int top=0, bottom=n-1;
    int left=0, right=m-1;

    // while(top<=bottom && left<=right){
    //     for(int i=left; i<=right;i++){ cout<<a[top][i]<<" ";}
    //     top++;
    //     for(int i=top;i<=bottom;i++){ cout<<a[top][right]<<" ";}
    //     right--;
    //     for(int i=right;i>=left;i--){ cout<<a[bottom][right]<<" ";}
    //     bottom--;
    //     for(int i=bottom;i>=top;i--){cout<<a[i][left]};
    //     left++;
    // }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(i==0 || j==0 || i==n-1 || j==m-1) cout<<a[i][j];
    //     }
    // }

    while (top < bottom) {
        for (int i = left; i <= right; i++) {
            cout << a[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            cout << a[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << a[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
    
}