

char *reverseWord(char *s)
{
    // printf("%s", s);
    int stringLength = strlen(s);

    char *s_new;
    s_new = malloc(sizeof(char) * stringLength);
    s_new[0] = '\0';
    for (int i = stringLength; i >= 0; --i)
    {
        char cToStr[2];
        cToStr[1] = '\0';
        cToStr[0] = s[i];
        strcat(s_new, cToStr);

        // free(letter);
    }

    // printf("%s", s_new);
    return s_new;
}
