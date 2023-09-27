#include <cmath>
#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      if(arr[i]>arr[j])
        return false;
    }
  }
  return true;
}

bool isSortedEff(int arr[],int n){
  for(int i=1;i<n;++i){
    if(arr[i]<arr[i-1]){
      return false;
    }
  }

  return true;
}

int main() {
  int arr[] = {5, 8, 20, 15};
  int a[] = {5, 8, 15,20};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << std::boolalpha << isSorted(arr, n) << endl;
  cout << std::boolalpha << isSorted(a, n) << endl;
  cout <<  std::boolalpha << isSortedEff(arr, n) << endl;
  cout <<  std::boolalpha << isSortedEff(a, n) << endl;
}