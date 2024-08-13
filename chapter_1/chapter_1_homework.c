#include <stdio.h>
#include <math.h>
int main () {
            // a. Write a program to calculate perimeter of rectangle.Take sides, a & b, from the user.
            // 2 * (side+side)

            float a, b;
            printf ("enter side one : ");
            scanf ("%f", &a);
            printf ("enter side two : ");
            scanf ("%f", &b);

            printf ("perimeter of a rectangle is %.2f", 2 * a + b);
            return 0;

            //b. Take a number(n) from user & output its cube(n*n*n).

            int a;
            printf ("enter value of a : ");
            scanf ("%d", &a);

            int cube = a * a * a;
            printf ("cube of a is %d ", cube);
            return 0; 

            // c. Write comments for programs a & b.
            /*
                        program a is calculating perimeter of a rectangle. the value of side is taken by user.
                        program b is calculating cube of a natural number. the natural number is given by user.
            */

}