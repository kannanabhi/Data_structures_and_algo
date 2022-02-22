#include"header_files.h"

#define ArrSize 10
int arr_size;
int arr_length=0;

struct card_details {
    long long unsigned int Card_Number;
    char Bank_code[ArrSize];
    char last_name[ArrSize];
    char first_name[ArrSize];
    char exp_date[ArrSize];
};
typedef struct card_details * CARD_DETIAL;

CARD_DETIAL  LoadAllData(char FileName[2*ArrSize],CARD_DETIAL array) {
    FILE *fptr;
    fptr=fopen(FileName,"r");
    char temp[50];
    char * token;
    int counter=0;
    
    CARD_DETIAL ptr=(CARD_DETIAL)malloc(10*sizeof(struct card_details));
    while(!feof(fptr)) {
        if(fptr==NULL) {
            break;
        }

        if(counter>=arr_size) {
            array=(CARD_DETIAL)realloc(array,2*arr_size*sizeof(struct card_details));
            arr_size=2*arr_size;
        }

        //extracting data from each line
        fscanf(fptr,"\"%lld,%s\n",&array->Card_Number,temp);

        token=strtok(temp,",");
        strcpy(array->Bank_code,token);

        token=strtok(NULL,",");
        strcpy(array->exp_date,token);

        token=strtok(NULL,",");
        strcpy(array->first_name,token);

        token=strtok(NULL,",");
        memcpy(array->last_name,token,5);
        
        counter++;
        arr_length++;    
    }
    return array;
}

void printList(CARD_DETIAL arr) {
    for(int i=0; i<arr_length; i++) {
        printf("%d. %lld, ",i+1,arr->Card_Number);
        printf("%s, ",arr->Bank_code);
        printf("%s, ",arr->exp_date);     
        printf("%s, ",arr->first_name);
        printf("%s\n",arr->last_name);
    }
}

//change this a lot
void insertionSort(CARD_DETIAL array, int s){
    // printf("Length: %d\n",arr_length);
    if(s==0){
        return;
    }
    struct card_details temp = array[s];
    insertionSort(array,s-1);
    insertInOrder(array,temp,s);
   
    // else{
    //     return insertInOrder(array,temp,s-1);
    // }
    // insertionSort(array, s-1);
    // insertInOrder(array[s-1], temp, s);

    // for(int i=1; i<arr_length; i++){
    //     struct card temp = array[i];
    //     array = insertInOrder(array,temp);
    // }
}

void insertInOrder(struct CARD_DETIAL array, struct card_detials temp, int i){
    for(int j=i-1; j>=0; j--){
        if(temp.Card_num < array[j].Card_num){
            array[j+1] = array[j];
            array[j] = temp;
        }
        else{
            array[j+1] = temp;
            break;
        }
    }
}

void main() {
    struct timeval t1,t2;
    double elapsedTime;
    arr_size=10;

    //starting timer
    gettimeofday(&t1,NULL);

    CARD_DETIAL ini;
    CARD_DETIAL sorted;
    ini=malloc(ArrSize*sizeof(struct card_details));
    ini=LoadAllData("10.txt",ini);
    printList(ini);

    // //now we sort the array
    // sorted=InsertionSort(ini);

    // gettimeofday(&t2,NULL);

    // elapsedTime = (t2.tv_sec-t1.tv_sec)*1000.0;
    // elapsedTime+=(t2.tv_usec-t1.tv_usec)/1000.0;
    // printf("Time taken to load and sort: %f ms \n",elapsedTime);


    // //write the time taken into a new fine
    // FILE *timeMeas = fopen("time_data.txt","w");
    // fprintf(timeMeas,"Time : %f",elapsedTime);

}
