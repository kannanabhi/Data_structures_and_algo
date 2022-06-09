#include<iostream>
using namespace std;

int getLength(char name[]) {
    int count=0;
    for(int i=0;name[i]!='\0';i++) {
        count++;
    }
    return count;
}
int main() {
    char arr[50];
    cout<<"enter the string "<<endl;
    cin>>arr;
    int count=getLength(arr);
    cout<<"Length of the string is "<<count<<endl;

    return 0;

}