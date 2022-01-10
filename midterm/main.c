
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "reverseWordsfromFile.c"



int main(int argc, char *argv[]){


    //printf("First argument: %s\n", argv[1]);  
    if (argc < 2){

        char input[50];
        scanf("%c", &input);
        reverseWordsfromFile(input);
        
    }

    else{
        for (int n=1; n<argc; n++){
       reverseWordsfromFile(argv[n]);
        } 
    }
       
    //reverseWordsfromFile("/home/seba/Desktop/elte_msc/imperative_programming/test.txt");

    return 0;
}