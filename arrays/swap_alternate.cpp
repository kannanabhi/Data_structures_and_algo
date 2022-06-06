#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alternate(int arr[],int size) {
    int prev=0; int next=1;
    while(next<size) {
        swap(arr[prev],arr[next]);
        prev+=2;
        next+=2;
    }
}

int main() {
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};
    
    swap_alternate(even,8);
    printArray(even,8);
    swap_alternate(odd,7);
    printArray(odd,7);
}