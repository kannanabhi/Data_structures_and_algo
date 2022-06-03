#include<iostream>
using namespace std;

void array_init(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}
int arraySum(int arr[],int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        sum+=arr[i];
    }
    return sum;
}

void printArr(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main() {
    cout<<"enter the size of array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"no of elements you want to initialise"<<endl;
    int size1;
    cin>>size1;
    array_init(arr,size1);

    int sum=arraySum(arr,size1);
    printArr(arr,size1);

    cout<<"sum of array elements is"<<sum<<endl;
}