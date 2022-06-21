#include<iostream>
using namespace std;

int getSum(int *arr,int size) {
    if(size==0) {
        return 0;
    }
    return arr[0]+getSum(arr+1,size-1);
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int ans=getSum(arr,8);
    cout<<"sum of the array is "<<ans<<endl;

    return 0;
}