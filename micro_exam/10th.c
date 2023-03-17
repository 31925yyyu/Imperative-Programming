#include <stdio.h>

// Create a program which prints the second greatest element of an array.

int main(){
    int num[100];
    int i, size;
    int max1, max2;

    printf("Please enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of array:\n");
    for (i = 0; i < size; i++){
        printf("The number %d is:", i+1);
        scanf("%d", &num[i]);
    }

    if(num[0]> num[1]){
        max1 = num[0];
        max2 = num[1];
    } else{
        max1 = num[1];
        max2 = num[0];
    }

    for (i = 2; i <size; i++){
        if( num[i] > max1){
            max2 = max1;
            max1 = num[i];
        }
        else if (num[i] > max2 && num[i] < max1){
            max2 = num[i];
        }
    }

    printf("The second greater elements is %d.\n", max2);
    
    return 0;
}