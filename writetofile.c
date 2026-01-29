#include <stdio.h>
#include <stdlib.h>

int main(){
    char sentence[1000];
    // create file pointer to weork with 
    FILE *fptr;

    //opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exitinh program 
    if (fptr == NULL){
        printf("ERROR!");
        exit(1);

    }
    printf("enter a senstence: \n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}