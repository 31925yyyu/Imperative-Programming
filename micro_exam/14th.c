#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write a program 
that prompts the user for a text up to 20 characters long and makes a copy of it.
Make sure that the copy uses only the amount of memory that is absolutely necessary.
*/

int  main(){
    int lengthOfstring;
    char fileContent[20];
    char tmp;

    FILE *readInputFile, *writeCopyFile;

    readInputFile = fopen("input.txt", "w");

    printf("Notice! You can only input 20 characters in file!\n");
    while (1) {
        printf("Enter string:");
        scanf("%s", fileContent);
        lengthOfstring = strlen(fileContent);
        if(lengthOfstring > 20){
            printf("Please enter length of string less than 20 characters.\n");
            continue;
        }
        else {
            break;
        }
    }
    fputs(fileContent, readInputFile);
    fclose(readInputFile);

    readInputFile = fopen("input.txt", "r");
    if(readInputFile == NULL){
        printf("File writing failed.\n");
        exit(0);
    }

    writeCopyFile = fopen("copy.txt", "w");
    if (writeCopyFile == NULL)
    {
        printf("File opening failed for %s", "copy.txt");
        exit(0);
    }

    tmp = fgetc(readInputFile);
    while (tmp != EOF)
    {
        fputc(tmp, writeCopyFile);
        tmp = fgetc(readInputFile);
    }
    
    printf("Copying completed.\n");
    fclose(readInputFile);
    fclose(writeCopyFile);

    return 0;
}
