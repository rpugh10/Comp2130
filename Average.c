#include <stdio.h>

int main(void){

    int numOfGrades;
    int sum = 0;

    printf("Enter the amount of grades you want to enter ");
    scanf("%d", &numOfGrades);

    #define GRADES numOfGrades

    for(int i = 0; i < GRADES; i++){
        int grade;
        printf("Enter integer grades: ");
        scanf("%d", &grade);
        sum += grade;
    }


    int average = sum / GRADES;

    printf("The average is %d\n", average);
    return 0;
}