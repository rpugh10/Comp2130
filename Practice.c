//Practicing printf, for loops, and arrays

#include <stdio.h>

//function main begins program execution
int main(void) //Since this function takes 0 arguments always include void in it
{
    //Defining a constant when using #define do not include = or ;
    #define ARRAY_LENGTH 5
    double x[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        //printing 7 blank spaces, 1 decimal, and the datatype
        printf("%7.1f", x[i]);
    }
}
