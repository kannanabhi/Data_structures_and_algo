#include<stdio.h>
#include<stdlib.h>
#include<time.h>

long int total_heap_space=0;

void *myalloc(int n) {
    void *ptr=malloc(n);
    total_heap_space+=n;
    return ptr;
}

void myfree(int *p,int x) {
    free(p);
    total_heap_space-=x;
}

int main() {
    int *x=(int *)myalloc(sizeof(int)*4);
    srand(time(0));
    for(int i=0;i<10;i++) {
        int M=(rand()%(25000-10000+1))+10000;
        int *A=myalloc(M*sizeof(int));
        printf("%p %p \n",A,&A[M-1]);
        myfree(A,M*sizeof(int));
    }
}