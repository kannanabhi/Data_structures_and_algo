#include<iostream>
using namespace std;

void printArray(int *arr,int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr,int size) {
    if(size==0 || size==1) {
        return ;
    }
    for(int i=0;i<size-1;i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,size-1);
}

int main() {
    int arr[5]={2,5,1,4,3};
    printArray(arr,5);
    bubbleSort(arr,5);
    printArray(arr,5);
    return 0;
}