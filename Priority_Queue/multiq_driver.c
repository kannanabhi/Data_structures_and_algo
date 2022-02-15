#include"multiq.h"

int main() {
    MultiQ new = createMQ(5);
    printf("size of my multi:%d\n",sizeMQ(new));
    printf("size:%d\n ",new.number);

    printmyQ(new);


    //tasks are added
    Task x,y,z;
    x.priority=3;
    x.TaskID= 1000;
    y.priority=2;
    y.TaskID=2000;
    z.priority=1;
    z.TaskID=3000;

    new=addMQ(new,x);
    new=addMQ(new ,y);
    new=addMQ(new,z);

    z.priority=1;
    z.TaskID=4000;
    new=addMQ(new,z);

    printf("size of my multi:%d\n",sizeMQ(new));
    printmyQ(new);

    printf("latest task %d\n",nextMQ(new));
    new=delNextMQ(new);
    printmyQ(new);

    printf("size of my multi:%d\n",sizeMQ(new));

    printQ(getQueueFromMQ(new,2));

    printf("size of my multi:%d\n",sizeMQ(new));

    printf("size of particular queue: %d \n",sizeMQbyPriority(new,1));

    
}