#include <stdio.h>

// Write a function which computes the length of a string.

int main(){
    char str[100];
    int i = 0;

    printf("Enter one string: ");
    gets(str); // scanf("%s", str);

    while(str[i] != '\0'){
        ++i;
    }

    printf("The length of %s is %d.\n", str, i);

    return 0;
}