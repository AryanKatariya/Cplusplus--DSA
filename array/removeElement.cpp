#include <iostream>
#include <cmath>
using namespace std;

int removeElement(int nums[], int val,int n) {
        int index = 0;
        for(int i = 0; i< n; i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
}

int main(){
    int nums[] = {3,2,2,3};
    int n = 4;
    int value = 3;
    int x = removeElement(nums,value,n);


    for (int i = 0; i < x; i++)
    {
        cout << nums[i] << " ";
    }
}