#include<iostream>
using namespace std;

int BinToDec(int num){
    int ans = 0,pow = 1;
    while(num>0){

        int rem = num % 10;
        num /= 10;
        ans = ans + (pow*rem);
        pow = pow*2;

    }

    return ans;

    
}

int main(){
    int n;
    cout<<"Enter a Binary Number:";
    cin>>n;

    int ans = BinToDec(n);
    cout<<ans;
    return 0;
}