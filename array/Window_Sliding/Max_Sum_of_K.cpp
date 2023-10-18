#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int maxSum(int arr[], int n, int k)
{
	int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;

		for(int j = 0; j < k; j++)
		{
			sum += arr[i + j];
		}

		max_sum = max(max_sum, sum);
	}

	return max_sum;

}

int effMaxSum(int arr[], int n, int k)
{
	int curr_sum = 0;

	for(int i = 0; i < k; i++)
		curr_sum += arr[i];

	int max_sum = curr_sum;

	for(int i = k; i < n; i++)
	{
		curr_sum += (arr[i] - arr[i - k]);

		max_sum = max(max_sum, curr_sum);
	}

	return max_sum;
}


int main() {

    int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

    cout<<maxSum(arr, n, k);
    cout << endl;
    cout<<maxSum(arr, n, k);
    
}