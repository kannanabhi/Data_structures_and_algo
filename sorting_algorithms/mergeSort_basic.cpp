//this is basic mergeSort code in which copying into a new array is involved
//the inplace code can be found in the same folder

#include<iostream>
using namespace std;

void printArray(int *arr,int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}

void merge(int *arr,int s,int e) {
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-(mid+1)+1;

    //creating the new arrays
    int *first=new int[len1];
    int *second=new int[len2];

    //copy values in the new arrays
    int ptr=s;
    for(int i=0;i<len1;i++) {
        first[i]=arr[ptr++];
    }
    ptr=mid+1;
    for(int i=0;i<len2;i++) {
        second[i]=arr[ptr++];
    }

    //merge the sorted arrays
    int ptr1=0,ptr2=0;
    ptr=s;

    while(ptr1<len1 && ptr2<len2) {
        if(first[ptr1]<second[ptr2]) {
            arr[ptr++]=first[ptr1++];
        }
        else {
            arr[ptr++]=second[ptr2++];
        }
    }
    while(ptr1<len1) {
        arr[ptr++]=first[ptr1++];
    }
    while(ptr2<len2) {
        arr[ptr++]=second[ptr2++];
    }

    delete []first;
    delete []second;

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