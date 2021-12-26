#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
printf("%i", 1);

string* arr;
int arrLenght = 13;

arr = (string*)malloc(sizeof(string)*arrLenght);
for (int n=1; n<arrLenght ; n++){
    printf("%i", 1);
    arr[n] = "hola\n";
        cout << arr[n]; //<<"\n";
    }
    return 0;

}