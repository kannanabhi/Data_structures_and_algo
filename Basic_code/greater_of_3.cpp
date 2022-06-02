#include<iostream>
using namespace std;

int main() {
    int x,y,z;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    cout<<"enter the value of z"<<endl;
    cin>>z;
    if(x>y) {
        if(x>z) {
            cout<<x<<" : x is the greatest"<<endl;
        }
        else{
            cout<<z<<" : z is the greatest"<<endl;
        }
    }
    else {
        if(y>z) {
            cout<<y<<" : y is the greatest"<<endl;
        }
        else{
            cout<<z<<" : z is the greatest"<<endl;
        }
    }
}