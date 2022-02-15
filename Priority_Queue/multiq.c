#include"multiq.h"

MultiQ createMQ(int num) {
    MultiQ temp;
    temp.queue= (QUEUE *)malloc(num*sizeof(QUEUE));
    for(int i=1;i<=num;i++) {
        temp.queue[i-1]= newQ();
    }
    temp.number=num;
    return temp;
}

MultiQ addMQ(MultiQ mq,Task t) {

    if(t.priority<=mq.number && t.priority>0) {
        mq.queue[t.priority-1]=addQ(mq.queue[t.priority-1],t.TaskID);
    } 
    else {
        printf("invalid priority\n");
    }
    return mq;

}

int nextMQ(MultiQ mq) {
    int counter=0;
    int temp;
    while(1) {
        if(!isEmptyQ(mq.queue[counter])){
            temp=front(mq.queue[counter]);
            printf("current thign: %d\n",mq.queue[counter].front->ele);
            return temp;
        }
        
        if(counter==(mq.number-1)) {
            printf("no queues found\n");
            return -1;
        }
        counter++;
    }


   printf("error found:");
}

MultiQ delNextMQ(MultiQ mq) {
    int counter=0;
    while(1) {
        if(!isEmptyQ(mq.queue[counter])) {
            mq.queue[counter]=delQ(mq.queue[counter]);
            return mq;
        }
        if(counter==(mq.number-1)) {
            printf("no queues found\n");
            return mq;
        }
        counter++;
        
    }
}

boolean isEmptyMQ(MultiQ mq) {
    int i;
    for(i=0;i<mq.number;i++) {
        if(isEmptyQ(mq.queue[i])==FALSE) {
            return FALSE;
        }
    }
    if(i==mq.number) {
        return TRUE;
    }
}


int sizeMQ(MultiQ mq) {
    int tot_length=0;
    
    for(int i=0;i<mq.number;i++) {
        
        if(!isEmptyQ(mq.queue[i])) {
            
            tot_length+=lengthQ(mq.queue[i]);
        }
    }
    return tot_length;
}

int sizeMQbyPriority(MultiQ mq,int p) {
    if(p<=mq.number && p>0) {
        return lengthQ(mq.queue[p-1]);
    }
    else {
        printf("invalid priority given\n");
        return -1;
    }
    
}
 
QUEUE getQueueFromMQ(MultiQ mq,int p) {
    QUEUE temp;
    if(p<=mq.number && p>0) {
        return mq.queue[p-1];
    }
    else {
        printf("specific queue not found:");
    }
    
}

void printmyQ(MultiQ mq) {
    for(int i=0;i<mq.number;i++) {
        printf("MultiQ no: %d \n",i+1);
        printQ(mq.queue[i]) ;
    }
}