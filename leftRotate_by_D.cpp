#include <iostream>
#include <cmath>
using namespace std;

void lRotation(int arr[],int n){
    int temp = arr[0];

    for(int i=1;i<n;++i){
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;
}

void lRotationD(int arr[],int n,int d){
    for(int i=0;i<d;++i){
        lRotation(arr,n);
    }
}

void effRotation(int arr[],int n,int d){
  int temp[d];

	for(int i = 0; i  < d; i++)
	{
		temp[i] = arr[i];
	}

	for(int i = d; i  < n; i++)
	{
		arr[i - d] = arr[i];
	}

	for(int i = 0; i  < d; i++)
	{
		arr[n - d + i] = temp[i];
	}	
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    effRotation(arr,n,2);

    for(auto x:arr){
        cout << x << " ";  
    }
}