//a proram to reverse the elements in an array
#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void array_reverse(int arr[],int size) {
    int start=0,end=size-1;

    while(end>start) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    // printArray(arr,10);
}

int main() {
    int arr[10]= {1,5,3,7,8,9,4,6,5,3};
    int arrr[9]= {7,5,8,6,4,5,1,8,9};

    array_reverse(arr,10);
    array_reverse(arrr,9);

    printArray(arr,10);
    printArray(arrr,9);

    return 1;
}