#include<iostream>
using namespace std;
int main(){
    int n, rem, sum = 0;
    cout<<"Enter a Number:";
    cin>>n;

    int temp = n;
    while(n>0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    if(sum==temp){
        
        cout<<sum<<" is a palindrome";
    }else{

        cout<<"not a palindrome";
    }

    return 0;
}