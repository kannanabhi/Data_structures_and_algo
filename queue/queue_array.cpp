#include<iostream>
using namespace std;

class queue {
    int qfront;
    int rear;
    int size;
    int *arr;
public:
    queue() {
        size=20;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    queue(int size) {
         
    }
    int front() {
    if(qfront==rear) 
        return -1;
    else 
        return arr[qfront];
    }
    int dequeue() {
        if(qfront==rear)
            return -1;
        else {
            int value=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear) {
                qfront=0;
                rear=0;
            }
            return value;
        }
    }
    bool isEmpty() {
        if(qfront==rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {

            arr[rear]=data;
            rear++;
    }      

};

int main() {
    //this is not optimal approach

    //because the initial space in array is not getting re-used
}