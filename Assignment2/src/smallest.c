/**
 * Finds the smallest of three integers.
 */


#include <stdio.h>


int main(void)
{
    // Take user input for three integers.
    int a, b, c;
    printf("%s\n", "Enter three integers:");
    scanf("%i %i %i", &a, &b, &c);

    int smallest;

    // Compare three integers and find the smallest one.
    if (a < b)
    {
        if (a < c)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
        if (b < c)
        {
            smallest = b;
        }
        else
        {
            smallest = c;
        }
    }
    
    // Show output.
    printf("Smallest integer: %i\n", smallest);
}