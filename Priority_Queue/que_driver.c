#include"que.h"

int main() {

    QUEUE myq=newQ();
    printf("is my queue empty : %d\n",isEmptyQ(myq));
    for(int i=0;i<10;i++) {
        myq=addQ(myq,i);
        printf("element added : %d \n",front(myq));
    }
    printf("is my queue empty : %d\n",isEmptyQ(myq));
    printf("length of the queue : %d\n",lengthQ(myq));

    //working of deletion
    printf("front element : %d \n",front(myq));
    myq=delQ(myq);
    printf("front element : %d \n",front(myq));
    
    return 0;
}