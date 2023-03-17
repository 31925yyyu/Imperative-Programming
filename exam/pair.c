#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pair1.h"
#include "pair1.c"

int main(int argc, char *argv[])
{
    int a[SIZE];
    int b[SIZE];
    printf("Assume that the input array elements are unique!\n");

    printf("The elements of pair1 is:\n");
    for(int i = 0; i < SIZE; ++i){
        printf("pair1[%d] = ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The elements of pair2 is:\n");
    for(int n = 0; n < SIZE; ++n){
        printf("pair2[%d] = ", n+1);
        scanf("%d", &b[n]);
    }
    pair out[SIZE*SIZE];
    cartesian1(a, b, out);

    printf("{");
    for(int i=0;i< SIZE*SIZE; ++i){
        printf("(%d,%d)", out[i].a,out[i].b);
    }
    printf("}");
    

    // Test cartesian2
    int a_size;
    int b_size;
    printf("\n============= Test cartesian2 =================\n");
    printf("Pair1 size:");
    scanf("%d",&a_size);
    printf("Pair2 size:");
    scanf("%d",&b_size);
    printf("The elements of pair1 is:\n");
    int * array1 = (int*)malloc(sizeof(int)*a_size);
    int * array2 = (int*)malloc(sizeof(int)*b_size);
    for(int i = 0; i < a_size; i++){
        printf("pair1[%d] = ", i+1);
        scanf("%d", &array1[i]);
    }

    printf("The elements of pair2 is:\n");
    for(int n = 0; n < b_size; n++){
        printf("pair2[%d] = ", n+1);
        scanf("%d", &array2[n]);
    }
    pair * test = cartesian2(array1, array2, a_size, b_size);

    printf("{");
    for(int i=0 ;i < a_size*b_size; i++){
        printf("(%d,%d)",test[i].a, test[i].b);
    }
    printf("}");

    free(test);
    free(array1);
    free(array2);
    
    //Task3: Filterig duplication
    // a function called cartesian3() Please check File pair1

    
}