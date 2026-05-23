
#include<iostream>
using namespace std;

int main(){
    int n;//table of this number
    cout<<"Enter Number:";
    cin>>n;

    cout<<"Table of "<<n<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }

    return 0;


    


}