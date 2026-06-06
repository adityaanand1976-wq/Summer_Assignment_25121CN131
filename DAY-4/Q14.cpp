#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    if(n <= 0){
        cout<<"Please enter a positive integer.";
        return 0;
    }

    if(n == 1){
        cout<<0;
        return 0;
    }

    if(n == 2){
        cout<<1;
        return 0;
    }

    int first = 0, second = 1;
    int next = 0;

    for(int i = 3; i <= n; i++){
        next = first + second;
        first = second;
        second = next;
    }

    cout<<next;
    return 0;
}
