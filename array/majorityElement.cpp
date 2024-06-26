#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;


int findMajority(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int count = 1;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
				count++;
		}

		if(count > n / 2)
			return arr[i];
	}

	return -1;

	// Time Complexity: O(n2), A nested loop is needed where both the loops traverse the array from start to end.
	// Auxiliary Space: O(1), No extra space is required.
}

int effFindMajority(int arr[],int n){

	int res=0,count=1;
	for (int i = 0; i < n; i++)
	{
		if(arr[res] == arr[i]){
			count++;
		}else{
			count--;
		}

		if(count==0){
			res=i;
			count=0;
		}
	}

	count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==arr[res]){
			count++;
		}
	}

	if (count <= n/2)
	{
		return -1;
	}
	
	return arr[res];
	
		
// 	Time Complexity: O(n), As two traversal of the array, is needed, so the time complexity is linear.
// 	Auxiliary Space: O(1), As no extra space is required.
}

int majorityElement(int arr[],int n){
	sort(arr,arr+n);
	return arr[n/2];
}


int main() {
	
    int arr[] = {2,2,1,1,1,2,2}, n = 8;

    //  cout<<findMajority(arr, n)<<endl;
    //  cout<<effFindMajority(arr, n);

	cout << majorityElement(arr,n);
	// majorityElement(arr,n);
	// for(auto x:arr){
	// 	cout << x << " ";
	// }
    
}