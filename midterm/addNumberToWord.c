#include "reverseWord.c"

char *addNumberToWord(int position, char *word)
{
    char *new_line;
    int stringLength = strlen(word);
    new_line = malloc(sizeof(char) * (stringLength + 5));
    word[0] = ' ';
    sprintf(new_line, "%i", position);
    strcat(new_line, word);
    strcat(new_line, "\n");
    printf("hi")
    return new_line;
}