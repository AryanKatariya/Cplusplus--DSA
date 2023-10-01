#include<iostream>
#include<cmath>
using namespace std;

int getWater(int arr[],int n){
    int res = 0;

    for (int i = 1; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax,arr[j]);
        }

        int rmax = arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax = max(rmax,arr[j]);
        }

        res = res+(min(lmax,rmax)-arr[i]);        
        
    }

    return res;

    // Time Complexity: O(n2). There are two nested loops traversing the array.
    // Space Complexity: O(1). No extra space is required.
    
}


int main() {
	
     int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1}, n = 12;

     cout<<getWater(arr, n);
    
}