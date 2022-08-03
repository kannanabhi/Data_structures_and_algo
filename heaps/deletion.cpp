#include<iostream>
using namespace std;


//TESTING CODE //
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
        return;
    }
    void deleteHeap();
};

//   code for DELETION
void node::deleteHeap() {
    //replace the root node
    arr[1]=arr[size];
    //delete the last element
    size--;
    //now we retain the heap property of the root
    int i=1;
    while(i<size) {
        int rightIndex=2*i+1;
        int leftIndex=2*i;
        int child= (arr[rightIndex]>arr[leftIndex])?rightIndex:leftIndex;
        if(arr[child]>arr[i]) {
            swap(arr[child],arr[i]);
            i=child;
        }
        else 
            return;
    }
    return;
}


int main() {
    node h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteHeap();
    h.print();

    return 0;
}