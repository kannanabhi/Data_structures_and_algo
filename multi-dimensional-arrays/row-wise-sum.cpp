#include<iostream> 
using namespace std;

void printRowSum(int arr[][4],int row,int col) {
    for(int i=0;i<row;i++) {
        int sum=0;
        for(int j=0;j<col;j++) {
            sum+=arr[i][j];
        }
        cout<<"sum of the "<<i<<" th row is "<<sum<<endl;
    }
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
        cout<<endl;
    }

    cout<<"the row-wise sum is as follows"<<endl;
    printRowSum(arr,3,4);

    return 1;

}