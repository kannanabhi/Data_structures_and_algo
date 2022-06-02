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

void main() {
    struct timeval t1,t2;
    double elapsedTime;


    //starting timer
    gettimeofday(&t1,NULL);

    struct collect ini;
    CARD_DETIAL sorted;
    printf("enter the filename:");
    char temp1[]="dependency_files/";
    char temp2[10];
    scanf("%s",temp2);
    printf("%s",strcat(temp1,temp2));
    ini=LoadAllData(temp1);
    printList(ini.myarray,ini.count);

    //now we sort the array
    insertionSort(ini.myarray,ini.count);
    printList(ini.myarray,ini.count);

    gettimeofday(&t2,NULL);

    elapsedTime = (t2.tv_sec-t1.tv_sec)*1000.0;
    elapsedTime+=(t2.tv_usec-t1.tv_usec)/1000.0;
    printf("Time taken to load and sort: %f ms \n",elapsedTime);
    //write the time taken into a new fine
    FILE *timeMeas = fopen("time_data.txt","w");
    fprintf(timeMeas,"Time : %f",elapsedTime);

}
