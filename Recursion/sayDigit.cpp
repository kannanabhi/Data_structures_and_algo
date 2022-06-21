#include<iostream>
using namespace std;

void digits(int n,string arr[]) {
    if(n==0) {
        return;
    }
    int digit=n%10;
    digits(n/10,arr);
    cout<<arr[digit]<<" ";
}



int main() {
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    digits(n,arr);

    return 0;
}