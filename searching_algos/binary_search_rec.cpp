#include<iostream>
using namespace std;

bool binarySearch(int *arr,int start,int end,int key) {
    if(start>end) {
        return false;
    }
    int mid= start+ (end-start)/2;
    if(arr[mid]==key) {
        return true;
    }
    else if(arr[mid]<key) {
        return binarySearch(arr,mid+1,end,key);
    }
    else 
        return binarySearch(arr,start,mid-1,key);
        

}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,10,12,14,16,18};
    int key=17;

    bool ans=binarySearch(arr,0,12,key);
    if(ans) {
        cout<<"element found"<<endl;
    }
    else {
        cout<<"element not found yet"<<endl;
    }

    return 0;
}