#include<iostream>
using namespace std;

void steve(bool prime[],int size) {
    //set all the numbers as prime
    for(int i=2;i<=size;i++){
        prime[i]=true;
    }

    //from base, if a number is prime, then set all of its multiples as not prime
    for(int i=2;i<=size;i++) {
        if(prime[i]) {

            for(int j=2*i;j<=size;j+=i){
                prime[j]=false;
            }
        }
        prime[0]=prime[1]=0;
    }

    return;
    //return the bool array in the end
}
int main() {
    int size=40;
    bool prime[size];
    steve(prime,size);
    int count=0;
    for(int i=2;i<size;i++) {
        if(prime[i]) {
            cout<<"it is prime number "<<i<<endl;
            count++;
        }
        else cout<<"it is not prime "<<i<<endl;
    }

    cout<<"number of prime number "<<count<<endl;

    return 0;
}
