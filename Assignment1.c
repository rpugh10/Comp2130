/***
 * Ryan Pugh
 * T00692297
 * Assignment 1
 * Due September 18th, 2025
 * This program will create multiple 1 dimensional arrays which hold the names of countries, years, the EV sales for one country
 * and will calculate the country total and yearly total for amount of EV sales.
 *
 */
#include <stdio.h>

 //main method which will run the program
 int main(void){

    //defining constants 
    #define YEARS 4
    #define COUNTRIES 5

    //creating one dimensional arrays
    char * countries[COUNTRIES] = {"China", "United States", "Germany", "United Kingdom", "France"};
    int years[] = {2021, 2022, 2023, 2024};
    int chinaSales[] = {3300000, 6500000, 7900000, 11000000};
    int usSales[] = {600000, 800000, 1200000, 1700000};
    int germanSales[] = {600000, 640000, 700000, 720000};
    int ukSales[] = {190000, 250000, 320000, 370000};
    int franceSales[] = {150000, 220000, 300000, 330000};
    int countryTotals[COUNTRIES] = {};
    int yearlyTotals[YEARS] = {};
    int grandTotal[COUNTRIES] = {};

    //Calculating the yearly total
    for(int i = 0; i < YEARS; i++){
        yearlyTotals[i] = chinaSales[i] + usSales[i] + germanSales[i] + ukSales[i] + franceSales[i];
    }

    //Calculating the country total
    int counter = 0;
    while( counter < 5 ){

        //using a switch to iterate thought the EV sales for each country

        switch(counter){

            case 0:
                countryTotals[counter] = chinaSales[0] + chinaSales[1] + chinaSales[2] + chinaSales[3];
                break;
            case 1:
                countryTotals[counter] = usSales[0] + usSales[1] + usSales[2] + usSales[3];
                break;
            case 2:
                countryTotals[counter] = germanSales[0] + germanSales[1] + germanSales[2] + germanSales[3];
                break;
            case 3:
                countryTotals[counter] = ukSales[0] + ukSales[1] + ukSales[2] + ukSales[3];
                break;
            case 4:
                countryTotals[counter] = franceSales[0] + franceSales[1] + franceSales[2] + franceSales[3];
                break;
        }
        counter++;
    }

    for(int i = 0; i < COUNTRIES; i++){
        grandTotal[0] += countryTotals[i];
    }

    for(int i = 0; i < YEARS; i++){
        printf("Year %d: %d\n", years[i], yearlyTotals[i]);
    }

    for(int i = 0; i < COUNTRIES; i++){
        printf("Country: %s Total EV Sales: %d\n", countries[i], countryTotals[i]);
    }

    printf("%d\n", grandTotal[0]);
}