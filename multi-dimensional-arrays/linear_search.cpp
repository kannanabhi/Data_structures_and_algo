#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row, int col) {
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(arr[i][j]==target) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][4];
    cout<<"enter the input for 3*4 array"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cout<<arr[i][j];
        }
    }

    int target;
    cout<<endl<<"element to search for : "<<endl;
    cin>>target;
    if(isPresent(arr,target,3,4)) {
        cout<<"eleement found"<<endl;
    }
    else {
        cout<<"element not found"<<endl;
    }
    return 1;
}