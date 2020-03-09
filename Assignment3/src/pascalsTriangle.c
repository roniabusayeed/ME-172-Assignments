#include <stdio.h>


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

// Prints the coefficients of nth row. (counting from 0th row)
void row(int n)
{
    for(int k = 0; k <= n; k++)
    {
        int coe = factorial(n) / (factorial(k) * factorial(n - k));
        printf("%i ", coe);
    }
    printf("\n");
}

int main(void)
{
    // Take user input for power of binomial, n.
    int n;
    printf("Enter n: ");
    scanf("%i", &n);

    // Print rows.
    for (int i = 0; i <= n; i++)
    {
        // Print preceding spaces
        for(int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        // Print row with height i.
        row(i);
    }
}
