// it was use to prevent optimization of variable in use 
#include <stdio.h>
#include <math.h>

void main(){

    volatile int v = 10 ;
    for (int i = 0; i <10 ;i++){
        v++;           
    }
    // if volatile was not use compiler will not return anyting as asm 
    // in ASM opcode ret was only return 
    // but due to volatile whole ASM code will genrate even we dont use Variable v after loof 
}