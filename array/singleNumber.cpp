// Every element appears twice except for one. Find that single one.
#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

int singleNumber(int nums[],int n) {
        sort(nums,nums+n);
        for(int i=1;i<n;i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[n-1];
}

int main(){
    int nums[] = {4,1,2,1,2};
    int n = 5;
    cout << singleNumber(nums,n);
}