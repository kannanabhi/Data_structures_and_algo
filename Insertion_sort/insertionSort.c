#include"header_files.h"
void insertionSort(CARD_DETIAL array, int size){
    if(size==0){
        return;
    }
    if(size>1) {
        insertionSort(array,size-1);
        insertInOrder(array[size-1],array,size-1);
    }
    
}

void insertInOrder(struct card_details array, CARD_DETIAL temp, int i){
    int j=i-1;
    while(j>=0 && temp[j].Card_Number>array.Card_Number) {
        temp[j+1]=temp[j];
        j--;
    }
    temp[j+1]=array;
}