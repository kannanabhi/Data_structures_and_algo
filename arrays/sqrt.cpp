#include<iostream>
using namespace std;


int int_sqrt(int num) {
    int start=0,end=num;
    int mid= start+ (end-start)/2;
    int square=mid*mid;
    int myans=mid;
    
    while(start<=end) {
        if(square==num) {
            myans=mid;
            break;
        }
        else if(square<num){
            start=mid+1;
            myans=mid;
        }
        else end=mid-1;
        
        
        mid=start+(end-start)/2;
        square=mid*mid;
    }
    return myans;
    
}

int decimal_part(int num,int preci,int old_ans) {
    double fracto=1,ans;
    for(int i=0;i<preci;i++) {
        fracto/=10;
        int count=1;
        double square=0;
        while(count<11 && square<num) {
            ans=old_ans+fracto;
            square=ans*ans;
            count++;
        }
        ans-=fracto;

    }
    return ans;
}


int main() {
    int x=37,precision_value=3;
    double myans=int_sqrt(x);
    myans=decimal_part(x,precision_value,myans);
    cout<<endl<<myans<<endl;
    
}