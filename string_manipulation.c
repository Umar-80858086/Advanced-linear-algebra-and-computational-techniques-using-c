#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }
}
int stringLength(char *str){
    int len = 0 ;
    while (str[len] != '\0'){
        len++;
    } return len;
}
void stringconcat(char *dest, char *src){
    int dest_len = stringLength(dest);
    int i = 0;
    while(src[i] != '\0'){
        dest[dest_len + i] = src[i];
        i++ ;

    } 
    dest[dest_len+i] = '\0';
}
int stringCompare(char *str1, char *str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
int main() {
char str1[100] = "Hello World";
char str2[100] = " Hello";
toUpperCase(str1);
printf("uppercase %s\n" , str1);
int x = stringLength(&str1);
printf("lenght of string %d\n", x);
stringconcat(&str1, &str2);
printf("%s\n", str1);
int y = stringCompare(&str1, &str2);
printf("%d", y);
return 0;
}
