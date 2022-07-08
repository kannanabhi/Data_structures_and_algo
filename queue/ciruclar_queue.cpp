#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int size;
    int qfront;
    int qrear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        arr=new int[size];
        qfront=-1;
        qrear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //if the queue is full
        if((qfront==0 && qrear==size-1)  || (qrear==qfront-1))
            return false;
        //inserting the first element
        else if(qfront==-1 && qrear==-1) {
            qfront=0;
            qrear=0;
        }
        //inserting to ensure the cyclic nature
        else if(qrear==size-1) {
            qrear=0;
        }
        
        //normal insertion
        else {
            qrear++;
        }
        arr[qrear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //check if the queue is empty
        if(qfront==-1 && qrear==-1) 
            return -1;
        //if the queue only has a single element
        else if(qfront==qrear) {
            int value=arr[qfront];
            arr[qfront]=-1;
            qfront=-1;
            qrear=-1;
            return value;
        }
        //deletion to ensure the cyclic nature
        else if(qfront==size-1 ) {
            int value=arr[qfront];
            arr[qfront]=-1;
            qfront=0;
            return value;
        }
      
        //normal deletion
        else  {
            int value=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            return value;
        }
    }
};

int main() {
    //just call the functions
}