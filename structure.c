#include <stdio.h>
#define MAXsize 50

typedef struct
{
    int IDno;
    char section;
    char name[MAXsize];

}Customer;

Customer Umar;

int main() {
    // Initialize the structure members
    Umar.IDno = 1;
    Umar.section = 'A';
    snprintf(Umar.name, sizeof(Umar.name), "Shaikh Mohammad Umar");

    // Print the structure members
    printf("ID: %d\n", Umar.IDno);
    printf("Section: %c\n", Umar.section);
    printf("Name: %s\n", Umar.name);

    return 0; // Added return statement
}