#include"header_files.h"

void printList(CARD_DETIAL arr,int count) {
    for(int i=0; i<count; i++) {
        printf("%d. %lld, ",i+1,arr->Card_Number);
        printf("%s, ",arr->Bank_code);
        printf("%s, ",arr->exp_date);     
        printf("%s, ",arr->first_name);
        printf("%s\n",arr->last_name);
        
        arr++;
    }
}


int main() {
    char myfile[50]="10";
    struct collect ini=LoadAllData(myfile);
    CARD_DETIAL Aini=ini.myarray;
    int counter=ini.count;
    printList(Aini,counter);
    return 0;
    
}