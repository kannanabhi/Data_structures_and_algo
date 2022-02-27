#include"header_files.h"


struct collect  LoadAllData(char FileName[2*ArrSize]) {
    FILE *fptr;
    fptr=fopen(FileName,"r");
    CARD_DETIAL array=(CARD_DETIAL)malloc(10*sizeof(struct card_details));
    struct collect loaded;
    if(!fptr) {
        printf("File not found:");
        return loaded;
    }


    char temp[50];
    char * token;
    int counter=0;
    int arr_size=10;
    while(!feof(fptr)) {
        if(fptr==NULL) {
            printf("file not exist:");
            break;
        }

        if(counter>=arr_size) {
            array=(CARD_DETIAL)realloc(array,2*arr_size*sizeof(struct card_details));
            arr_size=2*arr_size;
        }

        //extracting data from each line
        fscanf(fptr,"\"%lld,%s\n",&array[counter].Card_Number,temp);

        token=strtok(temp,",");
        strcpy(array[counter].Bank_code,token);

        token=strtok(NULL,",");
        strcpy(array[counter].exp_date,token);

        token=strtok(NULL,",");
        strcpy(array[counter].first_name,token);

        token=strtok(NULL,",");
        memcpy(array[counter].last_name,token,5);
        
        counter++;  
        // array++;
    }
    
    loaded.count=counter;
    loaded.myarray=array;
    return loaded;
}