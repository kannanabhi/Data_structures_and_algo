//use if to identify b/w capital letter, small letter and numbers
#include<iostream>
using namespace std;
int main() {
    char a;
    cout<<"enter the charachter"<<endl;
    cin>>a;
    cout<<a<<endl;
    if(a<='z'&&a>='a') 
        cout<<"lower_case"<<endl;
    else if(a<='Z'&&a>='A')
        cout<<"upper_case"<<endl;
    else if(a<='9'&&a>='0')
        cout<<"numeric charachter"<<endl;
    else 
        cout<<"other charachter"<<endl;
}