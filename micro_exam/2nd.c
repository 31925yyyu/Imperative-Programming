#include <stdio.h>

// Create a program which greets your name

int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello %s! Nice to meet you.\n", name);

    return 0;
}