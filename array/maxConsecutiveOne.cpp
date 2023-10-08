#include<iostream>
using namespace std;


int maxOne(int arr[],int n){
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] == 1){
                count++;
            }else{
                break;
            }
        }

        res = max(res,count);
    }
    
    return res;
}

int effMaxOne(int arr[],int n){
    int res=0,curr=0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            curr = 0;
        }else{
            curr += 1;
            res = max(res,curr);
        }
    }
    
    return res;
}

int main(){
    int arr[]={0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << maxOne(arr,n) << endl;
    cout << effMaxOne(arr,n) << endl;
}