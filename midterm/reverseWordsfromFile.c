#include "addNumberToWord.c"
#include <stdio.h>
#include <stdlib.h>


int reverseWordsfromFile(char path) {

    int numberOfLines = 1;
    int position = 1;
    int arrLenght = 13;
    char* arr;

    FILE *fp = fopen(path, "r");

    if (fp == NULL){
        printf("File opening unsuccessful!"); 
        return 1
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];
    while (fgets(buffer, MAX_LENGTH, fp))
            printf("%s", buffer);

    // close the file
    fclose(fp);

    return 0;
    

}