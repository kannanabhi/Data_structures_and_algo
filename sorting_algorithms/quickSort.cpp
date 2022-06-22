#include<iostream>
using namespace std;

void printArray(int *arr,int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}

int partition(int *arr,int s,int e) {
    int pivot=arr[s];
    int count=0;

    //find the position of pivot and swap it
    for(int i=s+1;i<=e;i++) {
        if(arr[i]<=pivot) {
            count++;
        }
    }
    int pivotIndex= s+count;
    swap(arr[s],arr[pivotIndex]);
    
    //swap elements on both sides of the pivot element
    while(s<pivotIndex && e>pivotIndex) {
        while(arr[s]<arr[pivotIndex]) {
            s++;
        }
        while(arr[e]>arr[pivotIndex]) {
            e--;
        }
        if(s<pivotIndex && e>pivotIndex) {
            swap(arr[s++],arr[e--]) ;
        }
    }

    return pivotIndex;
}

void quickSort(int *arr,int s,int e) {

    if(s>=e) {
        return;
    }

    int pivot=partition(arr,s,e);

    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);
}

int main() {
    int arr[]={3,1,5,2,4};
    int size=5;
    printArray(arr,size);
    quickSort(arr,0,size-1);
    printArray(arr,size);

    return 0;
}