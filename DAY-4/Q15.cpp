#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n < 0){
        cout<<n<<" is not an Armstrong number.";
        return 0;
    }

    int original = n;
    int temp = n;
    int digits = 0;

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    if(digits == 0){
        digits = 1; // handle n == 0
    }

    temp = n;
    int sum = 0;

    while(temp > 0){
        int digit = temp % 10;
        int power = 1;
        for(int i = 0; i < digits; i++){
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    if(sum == original){
        cout<<original<<" is an Armstrong number.";
    } else {
        cout<<original<<" is not an Armstrong number.";
    }

    return 0;
}