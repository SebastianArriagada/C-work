#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "library.h"


int main(int argc, char *argv[])
{   
    if (argc > 1){

        int c;
        FILE *file;
        file = fopen("circles.txt", "r");
        if (file) {
            while ((c = getc(file)) != EOF){
                // TODO 
                // separate the arguments and assign them within an array of circles
                putchar(c);

            }
            fclose(file);
        }
    }
    else{
           
       
    square sqr;
    circle crl1;
    circle crl2;
    circle crl3;
    enum colors color;
    color = red;

    sqr.side = 11;
    sqr.center[0]= 2;
    sqr.center[1]= 0;
    sqr.color = blue;

    crl1.radius = 3;
    crl1.center[0] = 1;
    crl1.center[1] = 2;
    crl1.color = red;

    crl2.radius = 8;
    crl2.center[0] = 1;
    crl2.center[1] = 2;
    crl2.color = green;

    crl3.radius = 20;
    crl3.center[0] = 1;
    crl3.center[1] = 2;
    crl3.color = red;

    circle crlArr[3] = {crl1, crl2, crl3};
    
    evaluateCircles(sqr, crlArr);
    smallerCircle(crlArr, color );
 
    

     }
    //printf("%i\n", color);
    //printf("%i", isInside(sqr,crl1));
    return 0;
}

