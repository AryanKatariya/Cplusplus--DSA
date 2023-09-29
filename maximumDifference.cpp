#include <iostream>
#include <cmath>
using namespace std;

int maxDiff(int arr[],int n){
    int ans = arr[1]-arr[0];

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            ans = max(ans,arr[j]-arr[i]);
        }
        
    }

    return ans;
    
}

int effMaxDiff(int arr[],int n){
    int ans = arr[1]-arr[0],minVal=arr[0];

    for (int i = 1; i < n; i++)
    {
        ans = max(ans,arr[i]-minVal);
        minVal = min(minVal,arr[i]);
    }
    
    return ans;
}

int main() {
	
      int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

      cout<<maxDiff(arr, n);
      cout << endl;
      cout << effMaxDiff(arr, n);
}