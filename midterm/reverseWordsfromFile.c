#include "addNumberToWord.c"
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int reverseWordsfromFile(string path) {

    std::ifstream inFile(path);
    std::string line;
    int numberOfLines = 1;
    int position = 1;
    int arrLenght = 13;
    string* arr;
    
    if (inFile.is_open()) {
    
        while (std::getline(inFile, line)) {
            numberOfLines++;
        }

        arr = (string*)malloc(sizeof(string)*arrLenght);

        if (arr == NULL){
            cout << "Error: memory could not be allocated";
            exit(0);
        }

        
        //arr = new (nothrow) string[arrLenght];
        std::ifstream inFile(path);
        while (std::getline(inFile, line)) {
            printf("%i", position);

            if (arrLenght < (position - 1)){
                arrLenght = arrLenght*2;
                arr = (string*)realloc( arr , arrLenght*sizeof(string) );
                
            }

            arr[position ] =  addNumberToWord(position, line.c_str() );
            position++;
            numberOfLines--;
        }
    //printf("%i", 1);
    for (int n=1; n>arrLenght ; n++){
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