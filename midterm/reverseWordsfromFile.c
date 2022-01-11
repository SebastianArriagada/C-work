#include "addNumberToWord.c"
#include <stdio.h>
#include <stdlib.h>

int reverseWordsfromFile(char *path)
{
    // actual row position marker
    int position = 1;
    // creation of lines store
    char **str_store;
    int strStoreSize = 8;
    str_store = malloc(strStoreSize * sizeof(char *));
    if (str_store == NULL)
    {
        printf("Memory allocation failed!");
        exit(1);
    }
    // load txt file
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("File opening unsuccessful!");
    }
    // reading line by line, max 1024 bytes
    const unsigned MAX_LENGTH = 1024;
    char buffer[MAX_LENGTH];
    while (fgets(buffer, MAX_LENGTH, fp))
    {
        // flip the line
        char *reverseLine = reverseWord(buffer);
        // add the position number to flipped line
        char *enumReverseLine = addNumberToWord(position, reverseLine);
        // if the lines store reaches its limit, it double its size
        if (position >= strStoreSize)
        {
            strStoreSize = strStoreSize * 2;
            str_store = (realloc(str_store, sizeof(char *) * strStoreSize));
            if (str_store == NULL)
            {
                printf("Memory allocation failed!");
                exit(1);
            }
        }
        // store the line in the corresponded position
        str_store[position] = enumReverseLine;
        // advance one position
        ++position;
        // free the variable used for flip the line
        free(reverseLine);
    }
    // close the file
    fclose(fp);

    // print each row
    for (int i = 1; i < strStoreSize; ++i)
    {
        if (i < position)
        {
            printf("%s", str_store[i]);
        }
        // free the pointers stored
        free(str_store[i]);
    }
    // free the row store
    free(str_store);
    return 0;
}