#include <iostream>
#include <algorithm>
using namespace std;

// Input : A = {1, 2, 3, 4, 5}
// Output : [48]
//          [20, 28] 
//          [8, 12, 16] 
//          [3, 5, 7, 9] 
//          [1, 2, 3, 4, 5] 

void printTriangle(int A[] , int n)
    {
        if (n < 1)
            return;
   

        int temp[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            int x = A[i] + A[i + 1];
            temp[i] = x;
        }

        printTriangle(temp, n - 1);


        for (int i = 0; i < n ; i++)
        {
            if(i == n - 1)
                cout << A[i] << " ";
            else
            cout << A[i] << ", ";
        }

        cout << endl;
    }

int main()
{
    int A[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(A) / sizeof(A[0]);
        
    printTriangle(A, n);
}