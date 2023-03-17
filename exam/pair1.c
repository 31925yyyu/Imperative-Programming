#include "pair1.h"

void cartesian1(int* a, int* b,  pair* output)
{    
    int index = 0;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            pair p ={a[i],b[j]};
            output[index] = p;
            index++;
        }
    
}
}

pair* cartesian2(int* a,int* b,int a_size,int b_size){
    pair *output = (pair*)malloc(sizeof(pair)*a_size*b_size);
    int index = 0;
    for (int i = 0; i < a_size; i++){
        for (int j = 0; j < b_size; j++){
            pair p ={a[i], b[j]};
            output[index] = p;
            index++;
        }
    }   
    return output;
}


int* removeDuplicate(int a[],int size,int* outSize)
{
    int i,j,tem,n;
    n=size;
    for(i=0;i<n-1;i++)
    {   for(j=0;j<n-1-i;j++)
 	    {
  		    if(a[j]>a[j+1])
   		    {
   		        tem=a[j];
    	 	    a[j]=a[j+1];
    		    a[j+1]=tem;
 		    }
 	    }
    }
 
    for(i=0;i<n-1;i++)
    {
 	    if(a[i]==a[i+1])
  	    {
  	        for(int n=i;n<11;n++)
  	        a[n]=a[n+1];
  	    }  
    }
 
    int cnt = 0;
    for(int k=0;k<n;k++)
    {
  	    if(a[k]!=a[k+1])
            cnt ++;
    }
    int *output = (int*)malloc(sizeof(int)*cnt);
    int index = 0;
    for(int k=0;k<n;k++)
    {
  	    if(a[k]!=a[k+1])
        output[index] = a[k];
        index++;
    }
    outSize = &index ;
    return output;
}


pair* cartesian3(int*a,int*b,int a_size,int b_size, int * outSize){
    int* new_a_size,* new_b_size;
    int *new_a = removeDuplicate(a,a_size, new_a_size);
    int *new_b = removeDuplicate(b,b_size, new_b_size);
    pair *output = (pair*)malloc(sizeof(pair)* *new_a_size**new_b_size);
    int index = 0;
    for (int i = 0; i < *new_a_size; i++){
        for (int j = 0; j < *new_b_size; j++){
            pair p ={a[i], b[j]};
            output[index] = p;
            index++;
        }
    }   
    int tmp = *new_a_size**new_b_size;
    outSize = &tmp ;
    return output;
}