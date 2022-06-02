//if an amount is given as input, howmnay 100rupee, 50rupee, 20 rupee and 1rupee notes can make this total amout.
//we will use greater currency whenever possible

#include<iostream>
using namespace std;

int find_balance(int x,int y) {
    int ans= x/y;
    return ans;
}
int new_balance(int x, int y,int z) {
    int new_ans=(x-y*z);
    return new_ans;
}

int main() {
    int a,b ;
    cout<<"enter the value of total amount"<<endl;
    cin>>a;

    int _100,_50,_20,_1;
    _100=find_balance(a,100);
    a=new_balance(a,_100,100);

    _50=find_balance(a,50);
    a=new_balance(a,_50,50);

    _20=find_balance(a,20);
    a=new_balance(a,_20,20);

    _1=find_balance(a,1);
    a=new_balance(a,_1,1);

    if(a==0) {
        cout<<"amount can be divided into "<<_100<<" 100s "<<_50<<" 50s "<<_20<<" 20s "<<_1<<" 1s "<<endl;
    }
    else {
        cout<<"amount couldn't be divided properly";
    }
}