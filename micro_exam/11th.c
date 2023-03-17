#include <stdio.h>

// Create a function which swaps the values of two variables.

int swapNum(int a, int b){
    int s;
    s = a;
    a = b;
    b = s;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}
int main(){
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("After swapping:\n");
    swapNum(a, b);
    return 0;
}