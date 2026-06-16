#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a Number:";
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            cout<<" ";
        }

        for(int k = 0 ; k<i+1 ; k++){
            cout<<k+1;
        }

        for(int k = i ; k >=1 ; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;

    
    
}