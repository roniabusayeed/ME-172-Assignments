/**
 * Calculates the area of a circle
 */

#include <stdio.h>
#include <math.h>


int main(void)
{
    const float pi = 3.1416;
    float radius, area;

    // Take user input for radius.
    printf("Enter radius (in cm): ");
    scanf("%f", &radius);

    // Calculate area.
    area = pi * pow(radius, 2);

    // Print output.
    printf("Area: %.2f sq. cm.\n", area);
}