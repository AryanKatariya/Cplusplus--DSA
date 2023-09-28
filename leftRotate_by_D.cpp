#include <iostream>
#include <cmath>
using namespace std;

void lRotation(int arr[],int n){
    int temp = arr[0];

    for(int i=1;i<n;++i){
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
}

void lRotationD(int arr[],int n,int d){
    for(int i=0;i<d;++i){
        lRotation(arr,n);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    lRotationD(arr,n,2);

    for(auto x:arr){
        cout << x << " ";  
    }
}