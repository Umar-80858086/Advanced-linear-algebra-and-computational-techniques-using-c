#include <stdio.h>
#include <stdint.h>

#include <stdbool.h>


bool isPowerOfTwo(int n) {
   if (n==0) return false ;
   while(n%2==0) n/=2;
   return n==1;
    }

int main(){
    int a;

    printf("Enter the number to check if power of 2: ");
    scanf("%d", &a);

    bool x = isPowerOfTwo(a);

    printf("%d\n", x);

    return 0;
}

