/***
 * Ryan Pugh
 * T00692297
 * Assignment 2
 * Due September 25th, 2025
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
 int calculateYearlyTotals(int country1, int country2, int country3, int country4, int country5);

 int calculateCountryTotals(int countryData[]);

 void printOneLine(char countryName[], int countryData[], int total);

 int calculateTheGrandTotal(int yearlyTotal[]);

 //Main method which will run the program
 int main(void){

 //Defining constants 
    #define YEARS 4
    #define COUNTRIES 5

    //Creating one dimensional arrays and grandTotal variable
    char * countries[COUNTRIES] = {"China", "United States", "Germany", "United Kingdom", "France"};
    int years[] = {2021, 2022, 2023, 2024};
    int chinaSales[] = {3300000, 6500000, 7900000, 11000000};
    int usSales[] = {600000, 800000, 1200000, 1700000};
    int germanSales[] = {600000, 640000, 700000, 720000};
    int ukSales[] = {190000, 250000, 320000, 370000};
    int franceSales[] = {150000, 220000, 300000, 330000};
    int countryTotals[COUNTRIES];
    int yearlyTotals[YEARS];
    int grandTotal = 0;

    //Calling the calculateYearlyTotals function four times
    yearlyTotals[0] = calculateYearlyTotals(chinaSales[0], usSales[0], germanSales[0], ukSales[0], franceSales[0]);
    yearlyTotals[1] = calculateYearlyTotals(chinaSales[1], usSales[1], germanSales[1], ukSales[1], franceSales[1]);
    yearlyTotals[2] = calculateYearlyTotals(chinaSales[2], usSales[2], germanSales[2], ukSales[2], franceSales[2]);
    yearlyTotals[3] = calculateYearlyTotals(chinaSales[3], usSales[3], germanSales[3], ukSales[3], franceSales[3]);


    //Calling the calculateCountryTotals function five times
    countryTotals[0] = calculateCountryTotals(chinaSales);
    countryTotals[1] = calculateCountryTotals(usSales);
    countryTotals[2] = calculateCountryTotals(germanSales);
    countryTotals[3] = calculateCountryTotals(ukSales);
    countryTotals[4] = calculateCountryTotals(franceSales);

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
    printOneLine(countries[0], chinaSales, countryTotals[0]);
    printOneLine(countries[1], usSales, countryTotals[1]);
    printOneLine(countries[2], germanSales, countryTotals[2]);
    printOneLine(countries[3], ukSales, countryTotals[3]);
    printOneLine(countries[4], franceSales, countryTotals[4]);

    //Calling the calculateTheGrandTotal function once
    grandTotal = calculateTheGrandTotal(yearlyTotals);

    //Printing out "Total" and the yearly totals
    printf("%-20s", "Total");
    for(int i = 0; i < YEARS; i++){
        printf("%12d", yearlyTotals[i]);
    }

    //Printing out the grand total with a space in front to align it with it's column
    printf(" %11d\n", grandTotal);
}

 //calculateYearlyTotals function
 int calculateYearlyTotals(int country1, int country2, int country3, int country4, int country5){
   return country1 + country2 + country3 + country4 + country5;
 }
 
 //calculateCountryTotals Function
 int calculateCountryTotals(int countryData[]){
    return countryData[0] + countryData[1] + countryData[2] + countryData[3];
 }

 //printOneLine function
 void printOneLine(char countryName[], int countryData[], int total){
    printf("%-20s %11d %11d %11d %11d %11d\n",countryName, countryData[0], countryData[1], countryData[2], countryData[3], total);
 }
 
 //calculateTheGrandTotal function
 int calculateTheGrandTotal(int yearlyTotal[]){
    return yearlyTotal[0] + yearlyTotal[1] + yearlyTotal[2] + yearlyTotal[3];
 }