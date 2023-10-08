#include <iostream>
#include <cmath>
using namespace std;

int maxProfit(int price[],int start,int end){

    if(end <= start)
		return 0;

    int profit = 0;

    for (int i = start; i < end; i++)
    {
        for ( int j = i+1; j <= end; j++)
        {
            if(price[j]>price[i]){
                int curr_profit = price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);
                profit = max(profit,curr_profit);
            }
        }
        
    }
    
    return profit;

    // Time Complexity: O(n^2), Trying to buy every stock and exploring all possibilities.
    // Auxiliary Space: O(1)

}

int effMaxProfit(int arr[],int n){

    int max_profit = 0;

    for(int i=1;i<n;++i){
        if(arr[i]>arr[i-1]){
            max_profit += arr[i]-arr[i-1]; 
        }
    }

    return max_profit;

    // Time Complexity: O(n), Traversing over the array of size n
    // Auxiliary Space: O(1)

}

int main() {

      int arr[] = {1, 5, 3, 8, 12}, n = 5;
      cout << maxProfit(arr, 0, n - 1) << endl;
      cout << effMaxProfit(arr,n);
    
}