/***
 * Ryan Pugh
 * T00692297
 * Assignment 3
 * Due October 2nd, 2025
 * This program is an extension of the previous assignment as we will be using the same arrays, constants and variables.
 * In this program I'll be creating 4 functions.
 * The first function will calculate the yearly totals by taking 5 country indexs in the parameter and returning it to main
 * The second function will calculate the country totals by taking an array of country data, adding up the sum 
 * at each index, and returning to main
 * The third function will print the country name, data for that country, and the total.
 * The fourth function will calculate the grand total by returning the sum of the yearly total to main
 */
#include <stdio.h>
 
 //Function prototypes
 void calculateYearlyTotals(int *countryTotals, int *p1, int *p2, int *p3, int *p4, int *p5);

 void calculateCountryTotals(int *countrySales, int *countryTotal);

 void printOneLine(char *countryNames, int *countryData, int *total);

 void calculateTheGrandTotal(int *yearlyTotal, int *total);

  //Defining constants 
    #define YEARS 4
    #define COUNTRIES 5

 //Main method which will run the program
 int main(void){

    //Creating one dimensional arrays and grandTotal variable
    char * countries[COUNTRIES] = {"China", "United States", "Germany", "United Kingdom", "France"};
    int years[] = {2021, 2022, 2023, 2024};
    int chinaSales[] = {3300000, 6500000, 7900000, 11000000};
    int usSales[] = {600000, 800000, 1200000, 1700000};
    int germanSales[] = {600000, 640000, 700000, 720000};
    int ukSales[] = {190000, 250000, 320000, 370000};
    int franceSales[] = {150000, 220000, 300000, 330000};
    int countryTotals[COUNTRIES] = {0};
    int yearlyTotals[YEARS] = {0};
    int grandTotal = 0;

    calculateCountryTotals(chinaSales, countryTotals);
    calculateCountryTotals(usSales, countryTotals + 1);
    calculateCountryTotals(germanSales, countryTotals + 2);
    calculateCountryTotals(ukSales, countryTotals + 3);
    calculateCountryTotals(franceSales, countryTotals + 4);

    calculateYearlyTotals(yearlyTotals, chinaSales, usSales, germanSales, ukSales, franceSales);

    calculateTheGrandTotal(yearlyTotals, &grandTotal);
    

    //Printing the header
    printf("%55s\n\n", "NEW EV CAR SALES");

    //Printing "Country" added the spaces so it'll be centered over the countries, and printing out the years with a space
    printf("%-20s", "     Country");
    for(int i = 0; i < YEARS; i++){
        printf("%11d ", years[i]);
    }

    //Printing out "Total"
    printf("%11s\n", "Total");

    //Calling the printOneLine function five times

    printOneLine(countries[0], chinaSales, &countryTotals[0]);
    printOneLine(countries[1], usSales, &countryTotals[1]);
    printOneLine(countries[2], germanSales, &countryTotals[2]);
    printOneLine(countries[3], ukSales, &countryTotals[3]);
    printOneLine(countries[4], franceSales, &countryTotals[4]);
    

    //Calling the calculateTheGrandTotal function once
    

    //Printing out "Total" and the yearly totals
    printf("%-20s", "Total");
    for(int i = 0; i < YEARS; i++){
        printf("%12d", yearlyTotals[i]);
    }

    //Printing out the grand total with a space in front to align it with it's column
    printf(" %11d\n", grandTotal);
}

 //calculateYearlyTotals function 
void calculateYearlyTotals(int *yearlyTotal, int *chinaPointer, int *usPointer, int *germanyPointer, int *ukPointer, int *francePointer){
    for(int i = 0; i < YEARS; i++){
        *(yearlyTotal + i) = *(chinaPointer + i) + *(usPointer + i) + *(germanyPointer + i) + *(ukPointer + i) + *(francePointer + i); 
    }
 }

 //calculateCountryTotals Function
 void calculateCountryTotals(int *countrySales, int *countryTotal){
   for(int i = 0; i < YEARS; i++){
      *countryTotal += *(countrySales + i);
   }
 }
//printOneLine function
void printOneLine(char *countryNames, int *countryData, int *total){
   printf("%-20s", countryNames);

   *total = 0;
   for(int i = 0; i < YEARS; i++){
      printf(" %11d", countryData[i]);
      *total += *(countryData + i);
   }

   printf(" %11d\n", *total);
}
 
 
 //calculateTheGrandTotal function
 void calculateTheGrandTotal(int *yearlyTotal, int *total){
    for(int i = 0; i < YEARS; i++){
      *total += *(yearlyTotal + i);
    }
 }