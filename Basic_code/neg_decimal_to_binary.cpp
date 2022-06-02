#include<iostream>
#include<math.h>
using namespace std;


void dec_to_bin(int n) {
    int i=0;
    double ans=0;
    while(n!=0) {
        if(n&1) {
            ans+= pow(10,i);
        }
        i++;
        n=n>>1;
    }
    cout<<ans<<endl;
}

void negdec_to_bin(int n) {
    int i=0;
    double ans=0;
    while(n!=0) {
        if(!(n&1)) {
            ans+= pow(10,i);
        }
        i++;
        n=n>>1;
    }
    ans++;
    cout<<ans<<endl;
}

int bit_operation() {
    int ans=0,n;
    cout<<"enter magnitude of negative number (without sign)"<<endl;
    cin>>n;
    
    //just positive number to its binary 
    dec_to_bin(n);
    //its negative binary representation
    negdec_to_bin(n);


    return 0;
}
int main() { 
    int answer2;
    
    answer2=bit_operation();

}