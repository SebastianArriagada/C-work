#include "reverseWord.c"
using namespace std;

string addNumberToWord(int position, string word){
    char new_line[33];
    sprintf(new_line, "%i", position );
    strcat(new_line,  " " );
    strcat(new_line, reverseWord(word).c_str() );
    strcat(new_line,  "\n" );

    return new_line;

}