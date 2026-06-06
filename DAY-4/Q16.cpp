#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout<<"Enter a Number:";
    cin>>n;

    
    for(int i = 1;i<n;i++){
        int sum = 0;
        int temp = i;

        while(temp>0){
            int digit = temp%10;
            sum += digit*digit*digit;
            temp = temp/10;

        }
        if(sum == i){
            cout<< i<< " ";
        }
    }
    return 0;
}