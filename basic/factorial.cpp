#include<iostream>
using namespace std;

int itrGetFactorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++)
        fact = fact * i;
    
    return fact;
}
int recGetFactorial(int num)
{
    if(num == 0)
        return 1;
        
    return num * recGetFactorial(num-1);
}

int main ()
{
    int num = 8;
    
    int fact1 = recGetFactorial(num);
    int fact2 = itrGetFactorial(num);
    
    cout << "Fact " << num << " : " << fact1 << '\n';
    cout << "Fact " << num << " : " << fact2;
    
    return 0;
}