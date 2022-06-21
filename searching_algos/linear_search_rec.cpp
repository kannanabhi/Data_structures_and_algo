#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int key) {
    if(size==0) {
        return false;
    }
    else if(arr[0]==key) {
        return true;
    }
    else 
        return linearSearch(arr+1,size-1,key);
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,10,12,14,16,18};
    int key=16;

    bool ans=linearSearch(arr,13,key);
    if(ans) {
        cout<<"element found"<<endl;
    }
    else {
        cout<<"element not found yet"<<endl;
    }

    return 0;
}