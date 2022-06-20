//checks if a string is pallindrome, but is case insensitive
#include<iostream>
using namespace std;


char toLower(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else if (ch>='A' && ch<='Z') {
        char alpha=ch-'A'+'a';
        return alpha;
    }
}
int getLength(char ch[]) {
    int count=0;
    for(int i=0;ch[i]!='\0';i++) {
        count++;
    }
    return count;
}
bool checkPallindrome(char ch[],int size) {
    int s=0,e=size-1;
    while(s<=e) {
        if(toLower(ch[s++])!=toLower(ch[e--])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char arr[30];
    cout<<"enter the string to check for pallindrome"<<endl;
    cin>>arr;
    cout<<arr;
    int length=getLength(arr);

    if(checkPallindrome(arr,length)) {
        cout<<"the string entered is a pallindrome"<<endl;
    }
    else {
        cout<<"entered string is not a pallindrome"<<endl;
    }
    return 1;

}