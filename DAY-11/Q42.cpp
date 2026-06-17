#include<iostream>
using namespace std;

int Max(int a ,int b){
    int Max = max(a,b);
    return Max;

}

int main(){
    int a ,b;
    cout<<"Enter  Number:";
    cin>>a>>b;
    cout<<Max(a,b);

    return 0;
}
