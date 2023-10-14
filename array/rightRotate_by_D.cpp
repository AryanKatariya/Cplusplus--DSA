#include <cmath>
#include <iostream>
using namespace std;

// void rRotation(int arr[], int n, int d) {
//   int temp[d];

//   for (int i = 0; i < d; i++) {
//     temp[i] = arr[n - d + i];
//   }

//   for (int i = d; i >= 0; i--) {
//     arr[i + d] = arr[i];
//   }

//   for (int i = 0; i < d; i++) {
//     arr[i] = temp[i];
//   }
// }

void reverse(int arr[], int s, int e) {
  while (s < e) {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

void effrRotation(int arr[], int n, int d) {
  d = d%n;
  reverse(arr, 0, n - d - 1);
  reverse(arr, n - d, n - 1);
  reverse(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  effrRotation(arr, n, 1);

  for (auto x : arr) {
    cout << x << " ";
  }
}