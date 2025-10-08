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

#include <stdio.h>

//New function 

void tempConverter(double cel, double *p1, double *p2);

int main(void){
  double celsius = 20.0;
  double kelvin = 0;
  double fahrenheit = 0;

  tempConverter(celsius, &fahrenheit, &kelvin);

  printf("20 celsius to fahrenheit is %10.2f and to kelvin is %-10.2f", fahrenheit, kelvin);
}

void tempConverter(double cel, double *fah, double *kel){
  *fah = (cel * 1.8) + 32;
  *kel = cel + 273.15;
}

#include <stdio.h>

void sum(int *nums, int *total);

#define SIZE 5

int main(void){
  int nums[SIZE] = {1,2,3,4,5};

  int total = 0;

  sum(nums, &total);

  printf("The sum of the nums array is %d", total);
}

void sum(int *nums, int *total){
  for(int i = 0; i < SIZE; i++){
    *total += *(nums + i);
  }
}

#include <stdio.h>

void printMessage(char *name);

int main(void){

  char *name= "Ryan";

  printMessage(name);

}

void printMessage(char *name){
  printf("Hello %s", name);
}
