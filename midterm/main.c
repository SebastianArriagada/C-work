#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <new>
#include <stdlib.h>
#include "reverseWordsfromFile.c"

using namespace std;


int main(int argc, char *argv[]){


    //printf("First argument: %s\n", argv[1]);  
    if (argc < 2){
        std::string input;
      
        cin >> input;
  
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