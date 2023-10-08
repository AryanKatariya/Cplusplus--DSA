#include <cmath>
#include <iostream>
using namespace std;

int getlargest(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    bool flag = true;
    for (int j = 0; j < n; ++j) {
      if (arr[i] < arr[j]) {
        flag = false;
      }
    }
    if (flag == true) {
      return i;
    }
  }
}

int effGetLargest(int arr[],int n){
  int r = 0;

  for(int i=0;i<n;++i){
    if(arr[i]>arr[r]){
      r = i;
    }
  }
  return r;
}

int main() {
  int arr[] = {5, 8, 20, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << getlargest(arr, n) << endl;
  cout << effGetLargest(arr, n) << endl;
}