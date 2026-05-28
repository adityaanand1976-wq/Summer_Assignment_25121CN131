#include<iostream>
using namespace std;
int main(){
     int a,b,temp,x,y;
    cout<<"Enter two Numbers:";
    cin>>a>>b;
    x = a;
    y = b;

    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
        
    }

    int lcm = x*y/a;

    cout<<"lcm and hcf are:"<<lcm<<" "<<a;
    return 0;
}