//write code for bubbleSort
//also draw flowchart
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
void bubbleSort(int arr[],int size) {
    for(int i=1;i<size;i++) {

        bool swapped=false;

        for(int j=0;j<size-i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }      

        }
        if(swapped==false) {
            break;
        } 
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
    bubbleSort(arr,size);
    cout<<"after the array is sorted"<<endl;
    printArray(arr,size);
}