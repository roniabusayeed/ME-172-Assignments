#include <stdio.h>
#include <stdbool.h>


// Calculates the factorial of a non-negative integer.
long factorial(int n)
{
    long result = 1;
    for(; n > 1; n--)
    {
        result *= n;
    }
    return result;
}

int main(void)
{
    // Take user input for x
    int x;
    printf("Enter x: ");
    scanf("%i", &x);

    long x_fact = factorial(x);
    long n = x_fact;

    // Represents the number of trailing zeros
    int count = 0;

    // Calculate
    for (;;)    // A while(true) would've been more appropriate
    {
        if (n % 10 == 0)
        {
            count++;
            n /= 10;
        }
        else
        {
            break;
        }
    }

    printf("%i! = %li\n", x, x_fact);
    printf("Total number of trailing zeros at the end of %i! = %i\n", x, count);
}
