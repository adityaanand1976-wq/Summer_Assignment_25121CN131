#include<iostream>
using namespace std;

int binToDec(int decNum){
    int ans = 0,pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int Num;
    cout<<"Enter a Number:";
    cin>>Num;
    int ans = binToDec(Num);
    cout<<ans;
    return 0;
}