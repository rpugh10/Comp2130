//Will compare numbers from the user to see if they are equal, larger, or smaller

#include <stdio.h>

//Main program function

int main(void){
    printf("Enter two integers, and I will tell you\n");
    printf("The relationship they satisfy");

    int integer1;
    int integer2;

    //Scanning int1 and int 2, using the & to store them in memory
    scanf("%d", "%d", &integer1, &integer2);

    if(integer1 == integer2){
        printf("%d is the same as %d\n", integer1, integer2);
    }

    else if(integer1 > integer2){
        //Like java instead of putting the variable name in you put the data type that it is expected to be 
        printf("%d is greater that %d\n", integer1, integer2);
    }

    else if(integer1 < integer2){
        printf("%d is less than %d\n", integer1, integer2);
    }

    else{
        printf("Enter valid numbers\n");
    }
}