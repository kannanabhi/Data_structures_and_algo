#include<stdio.h>
#include<stdlib.h>

typedef struct node * NODE ;
struct node {
    int ele;
    NODE next;
};
typedef struct {
    int size;
    NODE front;
    NODE rear;
}QUEUE;

typedef enum {
    FALSE,TRUE
}boolean;

QUEUE newQ();                    //create and return a new empty queue
boolean isEmptyQ(QUEUE q);       //tests whether is queue is empty or not       
QUEUE delQ(QUEUE q);             //delete the element in the front of the queue and return the modified queue
int front(QUEUE q);              //returns the element in the front of the queue
QUEUE addQ(QUEUE q,int e);       //adds e to the rear of the queue, return the modified queue
int lengthQ(QUEUE q);            //return the length of the queue

void printQ(QUEUE q) ;