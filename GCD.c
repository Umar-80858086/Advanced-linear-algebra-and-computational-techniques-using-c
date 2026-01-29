

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

int main (){
    int n1,n2;
    printf("Enter two positive number");

    scanf("%d %d", &n1, &n2);
   if ((n1 < 0) || (n2 < 0)){
   printf("!!!!  Please Enter the positive number !!!!");
   exit;
   } 
   else {
    while(n1!=n2){
        if (n1>n2){
            n1 -= n2;
        }
        else{
            n2 = n2-n1;

        }

    }
    printf("GCD = %d" ,n1);
}
    

    return 0;
}