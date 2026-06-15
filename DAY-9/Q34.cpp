#include<iostream>
using namespace std;
int main(){
    int  n ;
    cout<<"Enter a Number:";
    cin>>n;

    for(int i = 0;i<n;i++){
        int r = 1;
        for(int j = n-i;j>0;j--){
            cout<<r++;
        }
        cout<<endl;
    }
    return 0;
}