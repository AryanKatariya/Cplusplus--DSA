#include<iostream>
#include<algorithm>
using namespace std;

int minCostClimbingStairs(int arr[],int n) {

        int a = 0,b = 0;
        
        for (int i = 2; i <= n; i++) {
            int current_cost = min(a + arr[i - 1], b + arr[i - 2]);
            b = a;
            a = current_cost;
        }

        return a;
}

int main(){
    int arr[] = {1,100,1,1,1,100,1,1,100,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << minCostClimbingStairs(arr,n);
}