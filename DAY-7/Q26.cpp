#include<iostream>
using namespace std;

int fibonacci(int n ){
    if(n == 0){
        return n;
    }
    if(n == 1){
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n ;//to print series just use loop 
    
    cout<<"Enter a Number:";
    cin>>n;

    int fibo = fibonacci(n);
    cout<<fibo;

    return 0;
}