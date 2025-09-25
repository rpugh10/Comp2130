#include <stdio.h>

void swap(int *pX, int *pY);

void average(int *pX, int *pY, int *pAverage);

int main(void){
   int x, y, result;
   
    printf("Enter the first number: \n");
    scanf("%d", &x);
    printf("Enter the second number: \n");
    scanf("%d", &y);

    swap(&x, &y);

    printf("After swapping\n");
    printf("First = %d \n", x);
    printf("Second = %d \n", y);

    average(&x, &y, &result);

    printf("Average %d", result);
}


void swap(int *pX, int *pY){
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}

void average(int *pX, int *pY, int *pAverage){
   *pAverage = (*pX + *pY) / 2;
}