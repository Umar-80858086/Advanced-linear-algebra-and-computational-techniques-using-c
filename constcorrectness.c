#include <stdio.h>

int main() {
    // 1. const int x = 5;  // x can't be changed
    const int x = 5;
    printf("x = %d\n", x);
    // x = 10;  // ERROR: assignment of read-only variable 'x'

    // 2. const int *p;  // pointer to const int (can't change *p)
    const int *p;
    int y = 10;
    p = &y;        // OK: Can change where p points
    // *p = 20;   // ERROR: assignment of read-only location '*p'
    printf("*p = %d\n", *p);  // Output: 10

    // 3. int * const p2;  // const pointer (can't change p2, but can change *p2)
    int z = 30;
    int * const p2 = &z;  // Must initialize during declaration
    // p2 = &y;   // ERROR: assignment of read-only variable 'p2'
    *p2 = 40;     // OK: Can change value through pointer
    printf("*p2 = %d\n", *p2);  // Output: 40

    // 4. const int * const p3;  // const pointer to const int (can't change p3 or *p3)
    const int w = 50;
    const int * const p3 = &w;  // Must initialize during declaration
    // p3 = &y;   // ERROR: assignment of read-only variable 'p3'
    // *p3 = 60;  // ERROR: assignment of read-only location '*p3'
    printf("*p3 = %d\n", *p3);  // Output: 50

    return 0;
}