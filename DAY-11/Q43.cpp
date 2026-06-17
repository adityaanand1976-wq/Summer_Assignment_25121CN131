#include<iostream>
using namespace std;
bool Prime(int n){
    bool isPrime = true;
    if(n <= 1){
        return false;
    }
    for(int i = 2 ; i*i < n ; i++){
        if(n%i == 0){
            isPrime = false;

        }
    }
    return isPrime;



}
int main(){
    int n ;
    cout<<"Enter a Number:";
    cin>>n;

    cout<<Prime(n);
    return 0;
}