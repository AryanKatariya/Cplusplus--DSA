#include<iostream>
#include<algorithm>
using namespace std;


void zeroAtStart(int arr[],int n){
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i] == 0){
            for (int j = i-1; j >= 0; j--)
            {
                if(arr[j] != 0){
                    swap(arr[i],arr[j]);
                }
            }
            
        }
    }
    
}

void effzeroTostart(int arr[],int n){
    int count = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
}

int main(){
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    effzeroTostart(arr,n);

    for(auto x:arr){
        cout << x << " ";
    }
}