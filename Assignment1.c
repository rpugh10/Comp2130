/***
 * Ryan Pugh
 * T00692297
 * Assignment 1
 * Due September 18th, 2025
 * This program will create multiple 1 dimensional arrays which hold the names of countries, years, the EV sales for one country.
 * I'll be using a for loop to iterate though the country sales and store the sums in a yearlyTotal array.
 * Next using a switch statement I'll calculate the country totals.
 * After that I'll calculate the sum of the country totals and store the result in the grandTotal array
 * Lastly I'll print all the data out in a table format where the country names are left aligned and the years 
 * are roughly centered over each column
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

        //Using a switch to iterate thought the EV sales for each country
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

    //Calculating the sum of the country totals
    for(int i = 0; i < COUNTRIES; i++){
        grandTotal[0] += countryTotals[i];
    }

    //Printing out title
    printf(" %55s\n\n", "NEW EV CAR SALES");

    //Printing out the years. Added spaces before "Country" to center it over the countries
    printf("%-20s", "     Country");
    for(int i = 0; i < YEARS; i++){
        printf("%10d ", years[i]);
    }

    //Printing out the word total after the years and moving to a new line
    printf("%11s\n", "Total");

    
    //Printing out the country at index 0 followed by the data for the country
    printf("%-20s", countries[0]);
    for(int i = 0; i < YEARS; i++){
        printf("%11d", chinaSales[i]);
    }

    //Printing out the total for China. added a space before the %11d to move the total a little bit more to the right
    printf(" %11d", countryTotals[0]);

    printf("\n");

    //Printing out the country at index 1 followed by the data for the country
    printf("%-20s", countries[1]);
     for(int i = 0; i < YEARS; i++){
        printf("%11d", usSales[i]);
    }

    //Printing out the total for the US, also added a space to move the Us total to the right
    printf(" %11d", countryTotals[1]);

    printf("\n");

    //Printing out the country at index 2 followed by the data for the country
    printf("%-20s", countries[2]);
    for(int i = 0; i < YEARS; i++){
        printf("%11d", germanSales[i]);
    }

    //Printing out the total for Germany, adding a space for the same reasons as the total for China and the US.
    printf(" %11d", countryTotals[2]);

    printf("\n");

    //Printing out the country at index 3, followed by the data for the country
    printf("%-20s", countries[3]);
    for(int i = 0; i < YEARS; i++){
        printf("%11d", ukSales[i]);
    }

    //Printing out the total for the UK, adding a space here too 
    printf(" %11d", countryTotals[3]);

    printf("\n");

    //Printing out the country at index 4, followed by the data for that country
    printf("%-20s", countries[4]);
    for(int i = 0; i < YEARS; i++){
        printf("%11d", franceSales[i]);
    }
    
    //Printing out the total for France, also has a space in front of %11d
    printf(" %11d", countryTotals[4]);
    printf("\n");

    //Printing out the yearly totals for each country
    printf("%-20s", "Total");
    for(int i = 0; i < YEARS; i++){
        printf("%11d", yearlyTotals[i]);
    }

    //Printing out the grand total which is all sum of all the total country sales, also has a space in front of %11d
    printf(" %11d\n", grandTotal[0]);

}