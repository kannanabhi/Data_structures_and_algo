//the mergeSort algo which is done inplace

#include<iostream>
using namespace std;

void printArray(int *arr,int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}

void merge(int *arr,int s,int e) {
   
}

void mergeSort(int *arr,int s,int e) {
    if(s>=e) {
        return ;
    }
    int mid= s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main() {
    int arr[]={2,5,4,1,3};
    int size=5;

    printArray(arr,size);
    mergeSort(arr,0,size-1);
    printArray(arr,size);

    return 0;
}