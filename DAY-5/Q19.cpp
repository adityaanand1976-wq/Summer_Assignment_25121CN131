// Write a program to Print factors of a number. 
#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"Enter a Number:";
    cin>>n;
    cout<<"Factor of nummbers are:";

    for(int i = 1;i<=n/2;i++)
    {
        if(n%i == 0){
            cout<<i<<" ";

        }


    }

}