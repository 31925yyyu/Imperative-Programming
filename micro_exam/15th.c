#include <stdio.h>
#include <string.h>

/* Create a function called reverse() that has a string parameter. 
The function reverses the characters of the string locally.
*/
   
void reverse(char *str1)  
{  
    int length, tmp;  
    length = strlen(str1);
      
    for (int i = 0; i < length / 2; i++)
    {   
        tmp = str1[i];  
        str1[i] = str1[length - i - 1];  
        str1[length - i - 1] = tmp;  
    }  
}  
      
int main(){  
    char str[100];
    printf ("Enter the string: ");  
    scanf("%s", str); // gets(str);

    reverse(str);
    printf("The reversed string is: %s.\n", str);

    return 0;
}  