#include <iostream>
#include <cmath>
using namespace std;

int leaders(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        bool flag = false;

        for (int j = i+1; j < n; j++)
        {
            if(arr[i] <= arr[j])
			{
				flag = true;
				break;
			}
        }

        if(flag == false){
            cout << arr[i] << " ";
        }
        
    }
    
}

int effLeader(int arr[],int n){
    int curr_ldr = arr[n-1];

    cout << curr_ldr << " ";

    for (int i = n-2; i >= 0; i--)
    {
        if(curr_ldr < arr[i])
		{
			curr_ldr = arr[i];

			cout<<curr_ldr<<" ";
		}
    }
    
}


int main() {
	
    int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

    leaders(arr, n);
    cout << endl;
    effLeader(arr,n);
    
}