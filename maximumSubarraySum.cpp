#include<iostream>
using namespace std;


int maxSum(int arr[],int n){
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }

    return res;
    
}

int effMaxSum(int arr[],int n){
    int res = arr[0];

    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++){
            curr = curr+arr[j];
            res = max(res,curr);
        }
    }

    return res;
    
}


int main(){
    int arr[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxSum(arr,n) << endl;
    cout << effMaxSum(arr,n) << endl;
}