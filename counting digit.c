#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>
int main (){


    long long n;
    int count = 0;
    printf("Enter two positive number : ");
    scanf("%lld", &n);
    while (n !=0){
        n/=10;
        count++;
    }
     printf("number o digit:  %d", count);
    return 0;
}

