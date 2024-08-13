#include <stdio.h>
int main() {
            // a + b hole-quebe
            // int a = 5;
            // int b = 3;
            // the value is given by user
            int a, b, res;
            printf ("enter value of a \n");
            scanf ("%d", &a);

            printf ("enter value of b \n");
            scanf ("%d", &b);

            res = a * a * a + 3 * a * a * b + 3 * a * b * b + b * b * b;
            printf ("the result of a + b hole-quebe is %d", res);
            return 0;
}