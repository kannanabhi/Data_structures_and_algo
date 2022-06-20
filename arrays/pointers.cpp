#include<iostream>
using namespace std ;
 int main() {
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int *p = arr;   //pointer declared

    cout<<"address of starting element of array "<<arr<<endl;
    cout<<"first element value "<<*arr<<endl;


    cout<<"size of array pointer"<<sizeof(arr)<<endl;
    cout<<"size of normal pointer"<<sizeof(p)<<endl;

    return 1;
 }