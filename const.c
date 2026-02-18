#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>

int main(){
    const int v = 10 ;
    int *p = &v;
    *p = 20; // it will give warnign a we are changin the variable eve it was init by const 
    // so it was AVr const but ot pointer const 
    printf("%d", v);
}