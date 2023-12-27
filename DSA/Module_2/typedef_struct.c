/** Write a program to calculate cross-products and dot products of
**  a 3-dimensional vector:
**
**    1. Uses a type definition
**    2. Accepts User input of qty(2) 3-dimensional vectors
**    3. Calculate the cross-product of A x B and B x A
**    4. Calculate the dot product A * B
**
******************************************************************/

/************* Preprocessor Functions       **********************/
#include <stdio.h>
#include <stdlib.h>

/************ Structured Data Types ***************************/

typedef struct vectorvectorvector
{
    int x;
    int y;
    int z;
} v1, v2, v3
    /*************   Declare User Functions  **********************/

    int
    dot_product(Vector a, Vector b);
Vector cross_product(Vector a, Vector b);

/************     Begin MAIN LOOP     *************************/

int main(void)
{
    /**      Declare variables     **/
    Vector a, b, c;

    printf("Enter the 3 integer components of the first vector: ");
    scanf("%d%d%d", &(a.x), &(a.y), &(a.z));
    printf("Enter the 3 integer components of the second vector: ");
    scanf("%d%d%d", &(b.x), &(b.y), &(b.z));
    c = cross_product(a, b);
    printf("\n\t(%d %d %d) x (%d %d %d) = (%d %d %d)", a.x, a.y, a.z, b.x, b.y, b.z, c.x, c.y, c.z);
    c = cross_product(b, a);
    printf("\n\t(%d %d %d) x (%d %d %d) = (%d %d %d)", b.x, b.y, b.z, a.x, a.y, a.z, c.x, c.y, c.z);
    printf("\n\t(%d %d %d) * (%d %d %d) = %d\n", a.x, a.y, a.z, b.x, b.y, b.z, dot_product(a, b));

    /***********   AND CUT!  It's a wrap folks!  Take 5!     ***********/
    return 0;
}

/**********    User Functions to perform the calculations    ****/

int dot_product(Vector a, Vector b)
{
    return ((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}

Vector cross_product(Vector a, Vector b)
{
    Vector c;
    c.x = (a.y * b.z) - (a.z * b.y);
    c.y = (a.z * b.x) - (a.x * b.z);
    c.z = (a.x * b.y) - (a.y * b.x);

    return (c);
}