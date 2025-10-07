#include <stdio.h>

void averageAndTotal(int a[], int *p, int *t);

int main(void){
  int grades[] = {50, 80, 90};
  int average = 0;
  int total = 0;

  averageAndTotal(grades, &average, &total);

  printf("The average is %d and the total is %d", average, total);
}

void averageAndTotal(int marks[], int *average, int *total){
  for(int i = 0; i < 3; i++){
    *average += marks[i];
  }
  *total = *average;

  *average = *average / 3;
}
