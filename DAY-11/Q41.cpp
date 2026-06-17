#include<iostream>
using namespace std;
//function for sum

int Sum(int a,int b){
    int sum = a+b;
    return sum ;
}

int main(){
    int a,b;
    cout<<"Enter Number:";
    cin>>a>>b;

    
    cout<<Sum(a,b);
    return 0;
}