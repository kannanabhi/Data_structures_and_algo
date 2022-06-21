#include<iostream>
using namespace std;

int power(int base,int exp) {
    //base case
    if(exp==0) {
        return 1;
    }
    if(exp==1) {
        return base;
    }
    int half=exp/2;
    if(exp%2==0) {
        //even exponent
        return power(base,half)*power(base,half);
    }
    else {
        //old case
        return base*power(base,half)*power(base,half);
    }
}

int main() {
    int m,n;
    cout<<"enter the base and the exponent values respectively"<<endl;
    cin>>m>>n;
    int ans=power(m,n);
    cout<<"the answer of the power is "<<ans<<endl;

    return 0;
}