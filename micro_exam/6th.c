#include <stdio.h>

// Check whether a given number is palindrome

int main(){
    int num, i, tmp;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    tmp = num;
    
    while(num > 0){
        i = num % 10;
        sum = sum * 10 + i;
        num = num / 10;
    }

    if(tmp == sum){
        printf("The given number %d is palindrome.\n", tmp);
    }
    else{
        printf("The given number %d is not a palindrome.\n", tmp);
    }

    return 0;
}