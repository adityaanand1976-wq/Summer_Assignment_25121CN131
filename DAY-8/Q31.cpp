#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a Number:";
    cin>>n;
    
    for(int i = 0 ;i<n;i++){
        char c = 'A';
        for(int j=0;j<i+1;j++){
            cout<<c++;
        }
        cout<<endl;
    }
    return 0;
}