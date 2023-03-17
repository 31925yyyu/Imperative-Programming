#include <stdio.h>

/* Create a function, declare and define a static variable in it! 
Increase the value of the variable and print it out. 
Call the function in the main() several times!*/

/*  What's happening?
A static int variable remains in memory. It won't be destroyed. 
*/

int staFun(){
    static int num = 0;
    num++;
    return num;
}

int main(){
    printf("%d\n", staFun()); // the num is 1
    printf("%d\n", staFun()); // the num is 2
    printf("%d\n", staFun()); // the num is 3
    return 0;
}