//this program gives an example for linear search
#include<iostream>
using namespace std;

void printArr(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void array_init(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
}

bool linearSearch(int arr[],int size,int key) {
    for(int i=0;i<size;i++) {
        if(arr[i]==key) {
            return true;
        }
    }
    return false;
}

int main() { 
    cout<<"enter the size of array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"no of elements you want to initialise"<<endl;
    int size1,key;
    cin>>size1;
    array_init(arr,size1);

    //linear search code
    cout<<"enter the key value"<<endl;
    cin>>key;
    bool ans=linearSearch(arr,size1,key);

    //checking the results
    if(ans==true) {
        cout<<"element found"<<endl;
    }
    else {
        cout<<"element not found"<<endl;
    }

    return 1;
}