#include <stdio.h>
#include <stdlib.h>
#include <time.h> // includes functions rand() and srand()

/*
Guessing game: Read a number until it's equal to a chosen number. 
In case of wrong guessing help the user by printing whether the guessed number is to small or too big.
*/


int main(){
    int ranNum, myNum;
    srand(time(NULL));
    ranNum = (rand() % (100))+ 1; // The value of i is between 1 and 100.

    printf("Guessing game starts!\n");
    printf("Please entre one number between 1 and 100: ");

    while(1){
    scanf("%d", &myNum);
    if (ranNum == myNum){
        printf("Great!The guessing number is %d.\n", myNum);
        break;
    }else if (myNum > ranNum){
        printf("Input number is greater than the guessing number.\nTry again: ");
    }else{
        printf("Intput number is samller than the guessing number.\nTry again: ");
    }
    }

    printf("Good job! See you next time.\n");

    return 0;
}