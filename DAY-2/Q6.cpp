// reverse a numberr 
#include<iostream>
using namespace std;
int main(){
    int n,rem,sum = 0;
    cout<<"Enter a Number:";
    cin>>n;

    while(n>0){
        rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }

    cout<<"Reversed No:"<<sum;
    return 0;





}