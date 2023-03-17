#include <stdio.h>

#define YEAR 365 // We can get this informatio from the example
#define WEEK 7 
// Create a program which transforms the number of days to years, weeks and days.

int main(){
    int tmp;
    int years, weeks, days;
    printf("Enter the number of days: ");
    scanf("%d", &tmp);
    years = tmp / YEAR;
    weeks = (tmp % YEAR) / WEEK;
    days = tmp - (years * YEAR) - (weeks * WEEK);
    printf("%d days = %d year %d week %d days\n", tmp, years, weeks, days);

    return 0;
}