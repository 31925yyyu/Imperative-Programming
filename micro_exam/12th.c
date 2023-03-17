#include <stdio.h>

/* Write a program, which writes the even elements of 
an integer array to a file called "even_numbers.txt". */

int main(){
    FILE* fp;
    
    int num[100];
    int i, size;

    printf("Entre the size of integer array:");
    scanf("%d", &size);

    for(i = 0;i < size; i++){
        printf("Entre the integer %d: ", i+1);
        scanf("%d", &num[i]);
    }

    fp = fopen("even_numbers.txt", "w+");
    fprintf(fp, "The even number of array is: \n");

    for(i = 0;i < size; i++){
        if(num[i] % 2 == 0)
        {
            char tmp[10];
            sprintf(tmp, "%d\t", num[i]);
            fputs(tmp, fp);
        }
        else{
            continue;
        }
    }

    fclose(fp);
    return 0;
}
