// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

bool isUgly(int n) {
        for (int i=2; i<6 && n; i++)
            while (n % i == 0)
            n /= i;
        return n == 1;
}

int main(){
    int n = 14;
    cout << std::boolalpha <<isUgly(n);
}