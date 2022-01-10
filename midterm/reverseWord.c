

char reverseWord(char s){

    char s_new = "";

    for (int i = strlen(s) - 1; i >= 0; --i){
        s_new += s[i];
    }

    return s_new;
}
