#include<iostream>
using namespace std;

int power(int base,int x) {
    if(x==0) {
        return 1;
    }
    return base*power(base,x-1);
}
int main() {
    int n;
    cout<<"enter the base no"<<endl;
    cin>>n;
    int p;
    cout<<"enter the power to be raised"<<endl;
    cin>>p;

    int ans=power(n,p);
    cout<<"the answer is "<<ans<<endl;
    return 0;
}