//write a complete algorithm for binary serach
#include<iostream>
using namespace std;

void arrinit(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}

void printArray( int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int arr[],int size,int key) {
    int start=0,end=size-1;
    int mid= (start+end)/2;
    //use below definition of mid to solve the edge cases of INT_MAX
    //int mid= start+ (end-start)/2;

    while(start<=end) {
        if(arr[mid]==key) {
            return mid;
        }
        start=mid+1;
        mid=(start+end)/2;
        //mid= start+ (end-start)/2;

    }
    return -1;
}

int main() {
    
    int prompt;
    
    while(prompt) {

        cout<<"enter '1' to search in an array, '0' to exit the program"<<endl;
        cin>>prompt;

        cout<<"enter the size of the array"<<endl;
        int size,key,position;
        cin>>size;
        int arr[size];
        arrinit(arr,size);

        cout<<"enter the element you wish to search for"<<endl;
        cin>>key;
        position=binarySearch(arr,size,key);

        //printArray(arr,size);
        if(position==-1) {
            cout<<"element not found in array"<<endl;
        }
        else {
            cout<<"element "<<key<<" found in "<<position<<" index in array"<<endl;
        }

    

    }
    return 1;

}