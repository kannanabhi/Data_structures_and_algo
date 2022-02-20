#include"header_files.h"

#define ArrSize 10

struct card_details {
    long Card_Number[ArrSize];
    char Bank_code[ArrSize];
    char last_name[ArrSize];
    char first_name[ArrSize];
};
typedef struct card_details * CARD_DETIAL;

int * LoadAllData(char FileName[2*ArrSize]) {
    FILE *fptr;
    fptr=fopen(FileName,"r");
    
    int *ptr=(CARD_DETIAL)malloc(10*sizeof(struct card_details));
    while(!feof==NULL) {
        if(fptr==NULL) {
            break;
        }
        CARD_DETIAL temp;
        char source[100];
        fscanf(fptr,"%s",source);
        char * token= strtok(source,"\"\"");
        token=strtok(NULL,",");
        temp->Bank_code=atoi(token);
        token=strtok(NULL,",");
        temp->Card_Number=token;
        token=strtok(NULL,",");
        temp->Card_Number=token;
        token=strtok(NULL,",");
        temp->Card_Number=token;

        insert_front(p,temp) {
            
        }

        
    }
}

