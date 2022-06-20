#include<iostream> 
using namespace std;

int main() {
    int m,n;
    cout<<"enter the row and col size of the array"<<endl;
    cin>>m;
    cin>>n;

    //creating the 2d variable sized array
    int **arr = new int*[m];
    for(int i=0;i<m;i++) {
        arr[i]= new int[n];
    }

    //taking input
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }

    //taking output
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deleting the allocated memory
    for(int i=0;i<m;i++) {
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}