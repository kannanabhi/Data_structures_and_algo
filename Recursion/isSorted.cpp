#include<iostream>
using namespace std;

bool isSort(int *arr,int size) {
    if(size==0 || size==1) {
        return true;
    }
    if(arr[0]>arr[1]) {
        return false;
    }
    return isSort(arr+1,size-1);
}

int main() {
    int myarr[]={1,3,5,5,5,5,8,15};

    bool ans=isSort(myarr,5);
    if(ans) {
        cout<<"the array is sorted (non-decreasing)"<<endl;
    }
    else {
        cout<<"array is not sorted (non-decreasing)"<<endl;   
    }
    return 0;
}
