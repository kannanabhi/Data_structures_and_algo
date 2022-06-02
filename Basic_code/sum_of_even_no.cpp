//find the sum of first 'n' even numbers
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int a=2,sum=0,count=0;
    while(count<n) {
        sum+=a;
        cout<<endl<<sum;
        a+=2;
        count++;

    }
    cout<<"sum of first n even numbers="<<sum<<endl;
}