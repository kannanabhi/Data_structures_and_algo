#include"que.h"

QUEUE newQ() {
    QUEUE q;
    q.size=0;
    q.front=NULL;
    q.rear=NULL;
    return q;
}

boolean isEmptyQ(QUEUE q) {
    if(q.size==0) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

QUEUE delQ(QUEUE q) {
    if(q.size==0) {
        printf("Queue is already empty\n");
        return q;
    }
    NODE temp;
    temp=q.front;
    q.front= q.front->next;
    q.size--;
    free(temp);
    return q;
}

int front(QUEUE q) {
    return  q.front->ele;
}

QUEUE addQ(QUEUE q,int e) {
    NODE temp=(NODE)malloc(sizeof(struct node));
    if(q.size==0) {
        q.front=temp;
        q.rear=temp;
        q.size++;
        temp->ele=e;
        return q;
    }
    else if(q.size>0) {

        temp->ele=e;
        q.rear->next=temp;
        q.rear=temp;
        q.rear->next=NULL;


        q.size++;
        return q;
    }
    else {
        printf("Negative value in size\n");
        return q;
    }
    
}

int lengthQ(QUEUE q) {
    return q.size;
}


void printQ(QUEUE q) {
    NODE temp;
    temp=q.front;
    printf("\n [");
    while(temp!=NULL) {
        printf("%d,",temp->ele);
        temp=temp->next;
    }
    printf("]\n");
}