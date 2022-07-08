#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    stack<char> st;
    string name="vigilant";

    for(int i=0;i<name.size();i++) {
        char ch=name[i];
        st.push(ch);
    }
    string ans="";
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<"answer is "<<ans<<endl;
    return 0;
}