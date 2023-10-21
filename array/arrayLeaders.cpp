#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int leaders(int arr[],int n){
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

int effLeaders(int arr[], int n){
    int curr = arr[n-1];
    cout << curr << " ";

    for(int i = n-2;i>=0;--i){
        if(arr[i] > curr){
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

vector<int> arrayLeader(int arr[],int n){
    vector<int> ans;
    int curr = arr[n-1];
    ans.push_back(curr);

    for (int i = n-2; i >= 0; i--)
    {
        if(curr < arr[i]){
            ans.push_back(arr[i]);
            curr = arr[i];
        }

    }

    return ans;
    
}

int main(){
    int arr[] = {7, 10, 4,3, 6, 5, 2}, n = 7;

    // leaders(arr, n);
    // cout << endl;
    // effLeaders(arr, n);
    // cout << endl;

    vector<int> ans = arrayLeader(arr,n);
    for(auto x:ans){
        cout << x << " ";
    }
}