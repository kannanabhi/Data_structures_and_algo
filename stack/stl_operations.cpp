// Implementation of stack using STL
#include<iostream>
#include<stack>
using namespace std;

int main() {
    //creation of stack
    stack<int> s;

    //push 
    s.push(2);
    s.push(3);
    //pop
    s.pop();

    //printing the top element
    cout<<"printing the top element "<<s.top()<<endl;

    //checking if the stack is empty
    if(s.empty()) {
        cout<<"stack is empty "<<endl;
    }
    else {
        cout<<"stack is not empty "<<endl;
    }

    return 0;

}