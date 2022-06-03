#include<iostream>
using namespace std;

int fact(int x) {
    int facto=1;
    for(int i=1;i<=x;i++) {
        facto*=i;
        
    }
    return facto;
}

int nCr(int n,int r) {
    int num= fact(n);
    int deno= fact(r)*fact(n-r);
    int ans=num/deno;
    return ans;
}

int main() {
    int n,r;
    cout<<"enter the value of n and r"<<endl;
    cin>>n>>r;
    int answer=nCr(n,r);
    cout<<"the nCr value is : "<<answer<<endl;

    return 0;
}