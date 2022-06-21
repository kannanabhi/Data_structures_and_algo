#include<iostream>
using namespace std;

void headCount(int n) {
    if(n==0) {
        return ;
    }
    headCount(n-1);
    cout<<n<<endl;
}
void tailCount(int n) {
    if(n==0) {
        return ;
    }
    cout<<n<<endl;
    tailCount(n-1);
}
int main() {
    int n;
    cout<<"enter the size of counting number"<<endl;
    cin>>n;
    cout<<endl;

    headCount(n);
    cout<<endl<<endl;
    tailCount(n);
    
    return 0;
}