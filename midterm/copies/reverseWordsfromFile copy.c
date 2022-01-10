#include "addNumberToWord.c"
using namespace std;

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