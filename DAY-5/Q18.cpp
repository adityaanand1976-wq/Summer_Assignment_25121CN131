#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a NUmber:";
    cin>>n;
    int temp = n;
    int sum = 0;

    while( temp > 0){
        int digits = temp%10;
        int fact = 1;
        for(int i = 1;i<digits;i++){
            fact += fact*i;

        }
        sum = sum+fact;
        temp = temp/10;

    }
    if(sum == n){
        cout<<"strong number";

    }else{
        cout<<"not a strong number";

    }
    return 0;
   
}