//write code for the selection sort
//also try to draw the flowchart
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
void selectionSort(int arr[],int size) {
   for(int i=0;i<size-1;i++) {
       int smallest=i,j;
       for(j=i+1;j<size;j++){
            if(arr[j]<arr[smallest]) {
                smallest=j;
            }
       }
       swap(arr[i],arr[smallest]);
   }

}

int main() {
    cout<<"enter the size of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    initializeArray(arr,size);

    cout<<"before the array is sorted"<<endl;
    printArray(arr,size);
    selectionSort(arr,size);
    cout<<"after the array is sorted"<<endl;
    printArray(arr,size);
}