#include<iostream>
using namespace std;

int getSum(int *p,int n) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=p[i];
    }
    return sum;
}

int main() {
    int n; 
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int *arr= new int[n];

    cout<<"enter the values of the array elements"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int sums=getSum(arr,n);
    cout<<"Sum of the elements of the array is "<<sums<<endl;

    return 1;
}