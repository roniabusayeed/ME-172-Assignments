/**
 * Checks if a given year is a leap year or not.
 */


#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    // Take input from user for a year.
    int year;
    printf("%s", "Enter a year: ");
    scanf("%i", &year);

    // Check if the year is a leap year or not.
    bool leapYear;
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))  
    {
        leapYear = true;
    }
    else 
    {
        leapYear = false;
    }

    // Show output.
    if (leapYear)
    {
        printf("%i is a leap year.\n", year);
    }
    else
    {
        printf("%i is not a leap year.\n", year);
    }
}
