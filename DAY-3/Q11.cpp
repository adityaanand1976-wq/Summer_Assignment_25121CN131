#include<iostream>
using namespace std;
//based on euclids algorithm 
int main(){
    int a,b,temp;
    cout<<"Enter two Numbers:";
    cin>>a>>b;

    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
        
    }
    cout<<"gcd = "<<a;
    return 0;

}