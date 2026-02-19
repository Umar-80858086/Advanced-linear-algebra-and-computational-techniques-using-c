#include <stdio.h>

void main(){

    char *name_ptr = "UMAR";
    char name_aray[]= "umar";

    // SIMILARITY bw POINTER AND ARRAY
   // printf("name_ptr: %s, name_ptr: %p, *name_ptr: %c\n\n\n", name_ptr, name_ptr,*name_ptr);
    //printf("name_aray: %s, name_aray: %p, *name_aray: %c\n", name_aray, name_aray,*name_aray);


    // DIFFERENCE BETWEEN IN POINTER AND ARRAY
    
    //sizeof operator tlak in byte 
     printf("sizeof(name_ptr): %lu, sizeof(name_aray): %lu\n\n\n", sizeof(name_ptr), sizeof(name_aray));
    // answer sizeof(name_aray): 5 because size if umar is four + 1 (/0 in last char )
    // and each char is 1 byte like wise it was 4 + 1 = 5 bytes 
    // as machine wass 64 bit so pointer is 8 byte 

     int x[]= {10,11,12};
     int *xptr = x;

      printf("sizeof(xptr): %lu, sizeof(x): %lu\n\n\n", sizeof(xptr), sizeof(x));
      // ANS sizeof(xptr): 8, sizeof(x): 12 becouse this pc in 64 bit to pointer is 8 byte and array have holding 3 integet
      // each interger have 4 byte soace allocated 


      // Array can not be reassigned but pointer can 
      int a[]= {14,19,14};
     // a = x; /// array cant be reassign 
       xptr = a;



}