#include"multiq.h"
#include<sys/time.h>

MultiQ loadData(char filename[40]);
MultiQ testDel(MultiQ new,int num);

MultiQ loadData(char filename[40]) {
    FILE *fptr;
    fptr=fopen(filename,"r");
    Task myT;
    int id,pri;
    MultiQ test=createMQ(10);

    while(!feof(fptr)) {
        if(fptr==NULL) {
            break;
        }
        fscanf(fptr,"%d,%d\n",&id,&pri);
        myT.priority=pri;
        myT.TaskID=id;
        test=addMQ(test,myT);
    }
    return test;
}

MultiQ testDel(MultiQ new,int num) {
    for(int i=0;i<num;i++) {
        delNextMQ(new);
    }
    return new;
}

void main() {
   struct timeval t1, t2;
    double elapsedTime;
    // start timer
    gettimeofday(&t1, NULL);
    // do something or call a function
    // ...
    MultiQ mytest=loadData("input10000.txt");
    printmyQ(mytest);
    mytest=testDel(mytest,3);

    // stop timer
    gettimeofday(&t2, NULL);
    // compute and print the elapsed time in millisec
    elapsedTime = (t2.tv_sec - t1.tv_sec) * 1000.0;
    elapsedTime += (t2.tv_usec - t1.tv_usec) / 1000.0;
    printf("Total time is %f ms.\n",elapsedTime);
    
}