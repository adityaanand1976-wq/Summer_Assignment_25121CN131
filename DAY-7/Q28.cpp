#include<iostream>
using namespace std;

int reverse(int n){
    if(n == 0){
        return 0;
    }
    cout<<n%10;
   return reverse(n/10);
}
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int rev = reverse(n);
    
    return 0;
}