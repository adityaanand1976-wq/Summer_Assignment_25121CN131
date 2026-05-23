#include<iostream>
using namespace std;

int main(){

    int n,count=0,r;
    cout<<"Enter a Number:";
    cin>>n;
    
    while(n>0){
        r = n%10;
        count++;
        n = n/10;
    }

    cout<<"No of digits in number :"<<count;
    return 0;
}