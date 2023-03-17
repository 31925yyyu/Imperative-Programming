#include <stdio.h>

// Create a program which gets an integer as input and reverses it.

int main(){
    int tmp, rem;
    int rev = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &tmp);
    while (tmp != 0){
        rem = tmp % 10;
        rev = rev * 10 + rem;
        tmp /= 10;
    }
    printf("The reversed number is: %d.\n", rev);

    return 0;
}