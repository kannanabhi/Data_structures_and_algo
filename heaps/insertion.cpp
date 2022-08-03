#include<iostream>
using namespace std;

//INSERTION TO MAX HEAP

class node{
public:
    int arr[100];
    int size;

    node() {
        arr[0]=-1;
        size=0;
    }

    void insert(int val) {
        //note we initialised size to 0 , then we are pushing the adding element to make first index zero
        size=size+1;
        int index=size;
        //first we insert the element in the end
        arr[index]=val;

        //now we fix the heap property
        while(index>1) {
            int parent=index/2;
            if(arr[parent]<arr[index]) {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else 
                return;
        }
    }

    void print() {
        for(int i=1;i<=size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    node h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    return 0;
}