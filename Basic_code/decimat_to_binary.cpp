#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,i=0,ans=0;
    cout<<"enter the decimal number"<<endl;
    cin>>n;

    while(n!=0) {
        if(n&1) {
            ans+= pow(10,i);
        }
        i++;
        n=n>>1;
    }
    cout<<ans;
}