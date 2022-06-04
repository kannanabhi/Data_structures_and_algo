//write the code for insertion sort
//also draw the flowchart for insertion sort
#include<iostream>
using namespace std;

void initializeArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int arr[],int size) {
   

}

int main() {
    cout<<"enter the size of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    initializeArray(arr,size);

    cout<<"before the array is sorted"<<endl;
    printArray(arr,size);
    insertionSort(arr,size);
    cout<<"after the array is sorted"<<endl;
    printArray(arr,size);
}