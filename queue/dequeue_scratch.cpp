#include<iostream>
#include<stack>
using namespace std;

class Deque
{
    int *arr;
    int qfront;
    int qrear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr=new int[size];
        qfront=-1;
        qrear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull()) 
            return false;
        if(qfront==-1) {
            qfront=0;
            qrear=0;
        }
        else if(qfront==0 && qrear!=size-1)
            qfront=size-1;
        else 
            qfront--;
        
        arr[qfront]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull())
            return false;
        else if(qfront==-1 && qrear==-1) {
            qfront=0;
            qrear=0;
        }
        else if(qrear==size-1 && qfront!=0) {
            qrear=0;
        }
        
        else {
            qrear++;
        }
        arr[qrear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()) 
            return -1;
        int value=arr[qfront];
        arr[qfront]=-1;
        
        if(qfront==qrear) {           
            qfront=-1;
            qrear=-1;
        }
        else if(qfront==size-1 ) {            
            qfront=0;
        }
        else  {  
            qfront++;
        }
        return value;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty()) 
            return -1;
        int value=arr[qrear];
        arr[qrear]=-1;
        
        if(qfront==qrear) {           
            qfront=-1;
            qrear=-1;
        }
        else if(qrear==0 ) {            
            qrear=size-1;
        }
        else  {  
            qrear--;
        }
        return value;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()) 
            return -1;
        else
            return arr[qfront];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()) 
            return -1;
        else 
            return arr[qrear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(qfront==-1 && qrear==-1) 
            return true;
        else 
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((qfront==0 && qrear==size-1)  || (qrear==qfront-1))
            return true;
        else 
            return false;
    }
};

int main() {
    //just use an object of the above class
}