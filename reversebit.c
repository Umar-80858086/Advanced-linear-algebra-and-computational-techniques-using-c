 #include <stdio.h>
 #include <stdint.h>
 
 void main (){
 unsigned int n = 1222;

 unsigned int r = 0;

    for (int i = 0; i < 32; i++)
    {
        unsigned int c = n & (1U << 31);  // extract MSB
        r = r | (c >> (31 - i));         // place it in correct position
        n <<= 1;                         // shift left to bring next bit to MSB
    }

    printf("%u\n", r);

    
}