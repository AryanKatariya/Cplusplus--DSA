#include<iostream>
using namespace std;

int getSum(int n){
    if(n == 0)
        return 0;
    
    return (n%10)+getSum(n/10);
}

int main(){
    int arr[] = {253,9987,10};
    for(auto x:arr){
        cout << getSum(x) << endl; 
    }
}