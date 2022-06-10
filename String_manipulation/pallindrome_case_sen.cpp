//checks if a string is pallindrome, but is case sensitive

#include<iostream>
#include<string>
using namespace std;

int length( char name[]) {
    int count=0;
    for(int i=0;name[i]!='\0';i++) {
        count++;
    }
    return count;

}

bool isPallindrome(char arr[],int size) {
    int s=0,e=size-1;
    while(s<e) {
        if(arr[s]!=arr[e]) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    char arr[50];
    cout<<"enter the string "<<endl;
    cin>>arr;
    int count=length(arr);
    cout<<"Length of the string is "<<count<<endl;
    if(isPallindrome(arr,count)) {
        cout<<"it is pallindrome"<<endl;
    }
    else {
        cout<<"it is not pallindrome"<<endl;
    }

    return 0;
}