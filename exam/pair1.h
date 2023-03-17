#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PAIR
#define PAIR
#define SIZE 10

typedef struct pair{
    int a;
    int b;
} pair;

void cartesian1( int* a, int* b,  pair* output);
pair* cartesian2(int*a,int*b,int a_size,int b_size);
int* removeDuplicate(int a[],int size,int* outSize);
pair* cartesian3(int*a,int*b,int a_size,int b_size, int * outSize);

#endif