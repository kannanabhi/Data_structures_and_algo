#include<iostream> 
using namespace std;

int main() {
    int m;
    cout<<"enter the row  size of the array"<<endl;
    cin>>m;
    cout<<"enter the different column sizes of the array"<<endl;
    int *n=new int[m];
    for(int i=0;i<m;i++) {
        cin>>n[i];
    }

    //creating the 2d variable sized array
    int **arr = new int*[m];
    for(int i=0;i<m;i++) {
        arr[i]= new int[n[i]];
    }

    //taking input
    cout<<"enter the array elements now"<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n[i];j++) {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //taking output
    cout<<"now displaying the array "<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n[i];j++) {
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