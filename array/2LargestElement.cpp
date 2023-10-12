#include <cmath>
#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
  int r = 0;

  for (int i = 0; i < n; ++i) {
    if (arr[i] > arr[r]) {
      r = i;
    }
  }

  return r;
}

int secondLargest(int arr[], int n) {
  int largest = getLargest(arr, n);
  int second = -1;

  for (int i = 0; i < n; ++i) {
    if (arr[i] != arr[largest]) {
      if (second == -1)
        second = i;
      else if (arr[i] > arr[second]) {
        second = i;
      }
    }
  }

  return second;
}

int effSecondLargest(int arr[], int n){
  int res = -1, largest = 0;

  for(int i=1;i<n;++i){
    
    if(arr[i] > arr[largest]){
      res = largest;
      largest = i;
    }

    else if(arr[i] != arr[largest]){
      if(res == -1 || arr[i]>arr[res])
        res = i;
    }
  }

  return res;
}

int main() {
  int arr[] = {5, 8, 20, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << secondLargest(arr, n) << endl;
  cout << effSecondLargest(arr, n) << endl;
}