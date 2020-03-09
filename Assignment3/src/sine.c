#include <stdio.h>
#include <math.h>


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
    float x;
    printf("Enter x: ");
    scanf("%f", &x);

    // Represents the sum of sine series up to n terms.
    double sum = 0;

    // Total number of terms from start to add up.
    const int n = 10;

    // Calculate
    for(int i = 0, j = 0; j < n; i+= 2, j++)
    {
        sum += pow(-1, j) * pow(x, i + 1) / factorial(i + 1);
    }

    // Show output
    printf("Sum of sine series up to 10th term = %lf\n", sum);
}
