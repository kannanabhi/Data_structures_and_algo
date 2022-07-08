#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;

    //insertion of elements
    q.push(11);
    q.push(15);
    cout<<"size of queue is "<<q.size()<<endl;
    //deletion of elements
    q.pop();
    cout<<"size of queue is "<<q.size()<<endl;

    //checking if the queue is empty or not
    if(q.empty()) {
        cout<<"queue is empty"<<endl;
    }
    else 
        cout<<"queue is not empty"<<endl;
    q.pop();

    //front and back value of a queue
    q.push(1); q.push(2); q.push(3); q.push(4);
    cout<<"front of the queue is "<<q.front()<<endl;
    cout<<"rear of the queue is "<<q.back()<<endl;

    return 0;
}