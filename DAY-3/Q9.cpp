// to check whether number is prime or not 

#include<iostream>
using namespace std;

int main(){
    int n ;
    bool isPrime = true;
    cout<<"Enter a Number:";
    cin>>n;
    
    for(int i = 2;i*i<n;i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    cout<<isPrime;
    return 0;





}