#include<stdio.h>
#include<stdlib.h>
#include"que.h"

/* Task will be a structure containing 
    -TaskID tid
    -priority p

*/
typedef struct task {
    int TaskID;
    int priority;
}Task;
struct MultiQ {
    int size;

};
/*MultiQ will also be a structure



*/

MultiQ createMQ(int num);         //creates a list of "num" Queues, each of which is empty
MultiQ addMQ(MultiQ mq,Task t);  //adds t to the Queue corresponding to the priority p in mq. 
Task nextMQ(MultiQ mq);          //returns the front of the non-empty queue in mq with highest priority
Task delNextMQ(MultiQ mq);       //deletes the front of the non-empty queue in mq with highest priority ; returns modified MultiQ
Task isEmptyMQ(MultiQ mq);       //tests whether all the queues in mq are empty
int sizeMQ(MultiQ mq);           //returns the total number of items in the MultiQ
typedef int priority;
int sizeMQbyPriority(MultiQ mq,priority p); //returns the no: of items in mq with the priority p
QUEUE getQueueFromMQ(MultiQ mq,priority p); //returns the Queue with priority p