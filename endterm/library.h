#ifndef LIBRARY_H
#define LIBRARY_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


enum colors{red, blue, green};

struct square
{
    int side;
    int center[2]; // 0 represent the X axis and 1 represent Y axis
    enum colors color;
};


struct circle
{
    int radius;
    int center[2]; // 0 represent the X axis and 1 represent Y axis
    enum colors color;
};

typedef struct square square;
typedef struct circle circle;

void smallerCircle(circle [], enum colors);
void evaluateCircles(square, circle []);
bool isInside(square, circle);

void smallerCircle(circle cl[], enum colors col){
    int position = 0;
    int lenght = 3;
    int currentMin = 1000; 
    int currentMinPos = -1; 
    circle result;

    for (int i = 0; i < lenght; i++){
        if (cl[i].color == col){
            if ( currentMin >= cl[i].radius ){
            currentMin = cl[i].radius;
            currentMinPos = i;
            }
        }
    }
    if (currentMinPos >= 0 ){
        result = cl[currentMinPos];
        printf("%s %d\n", "Min radious of the circle:", cl[currentMinPos].radius);
    } else {
        printf("%s\n", "There are no circles of that color");
        //result = NULL;
    }
}


void evaluateCircles(square sq, circle cl[]){
    // sizeof(cl)/sizeof(cl[0]);
    int position = 0;
    int lenght = 3;
    circle result[lenght];
    
    for (int i = 0; i < lenght; i++){

        if ( isInside(sq, cl[i]) ){

            printf("%s %d\n", "Radious of circle inside of the square:", cl[i].radius);
            result[(position)].center[0] = cl[i].center[0];

            (position)++;
        }
    }
}

bool isInside(square sq, circle cl){

    int sqCenterX = sq.center[0];
    int sqCenterY = sq.center[1];
    int sqSize = sq.side;

    int clCenterX = cl.center[0];
    int clCenterY = cl.center[1];
    int clRadius = cl.radius;

    // Considering the 0,0 coordinate in the buttom right corner

    if ( ( sqCenterX - sqSize ) < (clCenterX - clRadius) ) {// cuck that the left side of the circle is inside
        if ( ( sqCenterX + sqSize ) > (clCenterX + clRadius) ){ // cuck that the right side of the circle is inside
            if ( ( sqCenterY + sqSize ) > (clCenterY + clRadius) ){ // cuck that the top side of the circle is inside
                if ( ( sqCenterY - sqSize ) < (clCenterY - clRadius) ){
                    return true;
                }
            }
        }
    }
    return false;
}

#endif