#include<iostream>
#include<string>
using namespace std;

bool pallindrome(string str,int i,int j) {
    if(i>j) {
        return true;
    }
    if(str[i]!=str[j]) {
        return false;
    }
    else {
        return pallindrome(str,i+1,j-1);
    }
}

int main() {
    string str="abcdcbfa";
    bool ans=pallindrome(str,0,str.length()-1);
    if(ans) {
        cout<<"it is a pallindrome"<<endl;
    }
    else {
        cout<<"it is not a pallindrome"<<endl;
    }
}