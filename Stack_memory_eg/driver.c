#include<stdio.h>

int bits;

void p (int x) {

   
    int pilani,goa,hyd,dub;
    printf("%p %p %p %p \n",&pilani,&goa,&hyd,&dub);
    if(x==1) {
        return ;
    }
    p(x-1);
    
    


}

void g() {
    int pilani,goa,hyd,dub;
    printf("%p %p %p %p\n",&pilani,&goa,&hyd,&dub);

}

void h() {
    int pilani,goa,hyd,dub;
    printf("%p %p %p %p\n",&pilani,&goa,&hyd,&dub);

}

void d() {
    int pilani,goa,hyd,dub;
    printf("%p %p %p %p\n",&pilani,&goa,&hyd,&dub);

}

int main() {

    //same memory gets re_used by the function call since it is from stack
    p(1);
    g();
    h();
    d();

    //call with recursion
    p(10);
    //here clearly new memory is used since , old stack is not cleared within recursion
    return 0;

}