//product of digits of number 

#include<iostream>
using namespace std;

int main(){

    int n,rem,product = 1;
    cout<<"Enter a Number:";
    cin>>n;

    while(n>0){
        rem = n%10;
        product = product*rem;
        n = n/10;
    }

    cout<<"product of digits:"<<product;
    return 0;
}