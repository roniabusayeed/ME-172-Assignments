/**
 * Computes average of four user given numbers.
 */ 

#include <stdio.h>


int main(void)
{
    // Allocating memory to store 4 numbers.
    const int count = 4;
    float numbers[count];

    // Prompt user for input
    printf("Enter four numbers: \n");
    for (int i = 0; i < count; i++)
    {
        scanf("%f", numbers + i);
    }

    // Calculate average
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    float avg = sum / count;

    // Print output
    printf("Average of ");
    for (int i = 0; i < count; i++)
    {
        if (i == count -1)
        {
            printf(", and ");
        }
        else if (i)
        {
            printf(", ");
        }
        printf("%.2f ", numbers[i]);
    }
    printf(" is: %.2f\n", avg);
}
