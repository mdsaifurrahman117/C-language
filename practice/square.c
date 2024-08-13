#include <stdio.h>
int main() {
            // a+b hole square 
            // int a = 5;
            // int b = 2;
            // the value of a and b is given by user
            int a, b, res;
            printf ("enter the value of a : ");
            scanf ("%d", &a);
            printf ("enter the value of b : ");
            scanf ("%d", &b);
            res = a * a + 2 * a * b + b * b;

            printf ("the result of a + b hole square is : %d", res);
            return 0;
}