#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <new>
#include <stdlib.h>

using namespace std;

string reverseWord(string s){

    std::string s_new = "";

    for (int i = s.size() - 1; i >= 0; --i){
        s_new += s[i];
    }

    return s_new;
}


string addNumberToWord(int position, string word){
    char new_line[33];
    sprintf(new_line, "%i", position );
    strcat(new_line,  " " );
    strcat(new_line, reverseWord(word).c_str() );
    strcat(new_line,  "\n" );

    return new_line;

}

int reverseWordsfromFile(string path) {

    std::ifstream inFile(path);
    std::string line;
    int numberOfLines = 1;
    int position = 1;
    std::string * arr;
    
    if (inFile.is_open()) {
    
        while (std::getline(inFile, line)) {
            numberOfLines++;
        }

        if (arr == nullptr){
            cout << "Error: memory could not be allocated";
            exit(1);
        }

        arr = new (nothrow) string[numberOfLines];
        std::ifstream inFile(path);
        while (std::getline(inFile, line)) {
            //printf("%i", position);
            arr[numberOfLines - 1 ] =  addNumberToWord(position, line.c_str() );
            position++;
            numberOfLines--;
        }

    for (int n=1; n<position ; n++){
        cout << arr[n]; //<<"\n";
    }

    delete[] arr;
    inFile.close();
    
    } else {
        cerr << "File opening unsuccessful!";
        //exit(1);   // call system to stop
    }

   return 0;
}




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