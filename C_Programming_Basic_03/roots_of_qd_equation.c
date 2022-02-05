/*  C Program to find the roots of quadratic equation  */

#include<stdio.h>
#include<math.h>

int main()
{
    int A, B, C;
    float discriminant, denominator, x1, x2;
    printf("ENTER THE VALUE OF A :: ");
    scanf("%d", &A);
    printf("\nENTER THE VALUE OF B :: ");
    scanf("%d",&B);
    printf("\nENTER THE VALUE OF C :: ");
    scanf("%d",&C);

    discriminant=(B*B)-(4*A*C);
    denominator = 2 * A;
    if(discriminant > 0)
    {
    printf("\nTHE ROOTS ARE REAL ROOTS.");
    x1 = (-B/denominator)+(sqrt(discriminant)/denominator);
    x2 = (-B/denominator)-(sqrt(discriminant)/denominator);
    printf("\n\nTHE ROOTS ARE :: %f and %f\n", x1, x2);
    }
    else if(discriminant == 0)
    {
    printf("\nTHE ROOTS ARE SAME.");
    x1 = -B/denominator;
    printf("\n\nTHE ROOT IS :: %f\n", x1);
    }
    else
    printf("\nTHE ROOTS ARE IMAGINARY ROOTS.\n");

    return 0;
}