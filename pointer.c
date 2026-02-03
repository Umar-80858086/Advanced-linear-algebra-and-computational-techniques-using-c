/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct {
	int marks;
	char division;
	short srNO;

} ClassRoom;

ClassRoom Std1, Std2;


int main() {
	Std1.marks = 89;
	Std2.srNO = 32;
	printf("%ld\t", sizeof(Std2));
	printf("Size of Std2 (ClassRoom struct): %ld bytes\n", sizeof(Std2.srNO));
}