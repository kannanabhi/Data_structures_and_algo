#include<stdio.h>
#include<string.h>
#include<sys/time.h>
#include<stdlib.h>

#define ArrSize 10

struct card_details {
    long long unsigned int Card_Number;
    char Bank_code[ArrSize];
    char last_name[ArrSize];
    char first_name[ArrSize];
    char exp_date[ArrSize];
};
typedef struct card_details * CARD_DETIAL;
struct collect {
    int count;
    CARD_DETIAL myarray;
};



struct collect  LoadAllData(char FileName[2*ArrSize]) ;
void printList(CARD_DETIAL arr,int count);

void insertionSort(CARD_DETIAL array, int size);
void insertInOrder(struct card_details array, CARD_DETIAL temp, int i);