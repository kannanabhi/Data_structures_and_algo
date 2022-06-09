#include<iostream>
using namespace std;

int length( char name[]) {
    int count=0;
    for(int i=0;name[i]!='\0';i++) {
        count++;
    }
    return count;

}

void reverse(char name[],int size) {
    int start=0,end=size-1;
    while(start<end) {
        swap(name[start++],name[end--]);
    }

    return ;
}

int main() {
    char arr[50];
    cout<<"enter the string "<<endl;
    cin>>arr;

    cout<<"the string before reverse is "<<arr<<endl;
    int count=length(arr);
    reverse(arr,count);
    cout<<"the string after reversal is "<<arr<<endl;

    return 0;
}