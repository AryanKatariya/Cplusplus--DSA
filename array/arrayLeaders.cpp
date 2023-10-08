#include <iostream>
#include <cmath>
using namespace std;

void leaders(int arr[],int n){
    for (int i = 0; i < n; i++){
        bool flag = true;
        for (int j = i+1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout << arr[i] << " ";
        }
    }
}

void effLeaders(int arr[], int n){
    int curr = arr[n-1];
    cout << curr << " ";

    for(int i = n-2;i>=0;--i){
        if(arr[i] > curr){
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

int main(){
    int arr[] = {7, 10, 4,3, 6, 5, 2}, n = 7;

    leaders(arr, n);
    cout << endl;
    effLeaders(arr, n);
}