/**
 * Finds the roots of a quadratic equation.
 */


#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(void)
{
    // Take user input for coefficients a, b, and c.
    double a, b, c;
    printf("%s", "a = ");
    scanf("%lf", &a);
    printf("%s", "b = ");
    scanf("%lf", &b);
    printf("%s", "c = ");
    scanf("%lf", &c);

    // Calculate
    double discriminant = pow(b, 2) - 4 * a * c;
    bool hasRealRoots = discriminant < 0 ? false : true;
    double root1, root2;
    double realPart, imginaryPart;
    if (hasRealRoots)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else
    {
        realPart = -b / (2 * a);

        // Discriminant, discriminant is negative here 
        // as hasRealRoots boolean variable is evaluated
        // false in the if clause. So, negating discriminant
        // will return a non-negative argument for sqrt function.

        // What we are actually doing is pulling out the 
        // imaginary i off the expression so that we can just
        // append it later when we will be showing output.
        imginaryPart = sqrt(-discriminant) / (2 * a);
    }

    // Show output
    printf("Roots are: \n");
    if (hasRealRoots)
    {
        printf("%.2lf, %.2lf\n", root1, root2);
    }
    else
    {
        // As the roots are complex conjugate, we write the 
        // real and imaginary parts separately which we
        // calculated into two separate variables beforehand.
        printf("%.2lf+%.2lf%c, %.2lf-%.2lf%c\n",
         realPart, imginaryPart, 'i', realPart, imginaryPart, 'i' );
    }
}
