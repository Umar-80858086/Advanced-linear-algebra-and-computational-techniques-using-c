#include <stdio.h>

void swap(int *a, int *b) {
   *a = *a + *b; // Add the values
    *b = *a - *b; // Subtract to get the original value of a
    *a = *a - *b; // Subtract to get the original value of b}

}

int main() {
        char x = 'A', y = 'a';

    printf("Before swap: x = %c, y = %c\n", x, y);
    
    // Convert to int for swapping
    int int_x = (int)x, int_y = (int)y;
    swap(&int_x, &int_y);
 // Convert back to char
    x = (char)int_x;
    y = (char)int_y;
    
    printf("After swap: x = %c, y = %c\n", x, y);
  
    /* char buffer[50];
    snprintf(buffer, sizeof(buffer), "ID: %d, Grade: %c", 123, 'A');
    printf("Formatted string: %s\n", buffer);*/


    return 0; // Added return statement
}