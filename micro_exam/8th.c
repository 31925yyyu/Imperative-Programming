#include <stdio.h>

/* Write a function that is given two strings as parameters 
and returns the concatenation of these strings */

char* strconcat(char *str1, char *str2){
    int length = 0;
    
    while(str1[length] != '\0'){
        ++length;
    }

    for(int tmp = 0; str2[tmp] != '\0'; ++length, ++tmp){
        str1[length] = str2[tmp];
    }

    str1[length] = '\0';
    return str1;
}

int main(){
    char str1[100], str2[100];
    
    printf("Enter the string1: ");
    gets(str1);  // scanf("%s", str1); 
    printf("Enter the string2: ");
    gets(str2);  // scanf("%s", str2); 

    strconcat(str1, str2);
    printf("Two string concatenate is %s.\n", str1);

    return 0;
}