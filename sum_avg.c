// sum and average of three number

#include <stdio.h>
int main() {
            int a, b, c, sum;
            float avg;
            printf ("enter frist integer value : ");
            scanf ("%d", &a);
            printf ("enter second integer value : ");
            scanf ("%d", &b);
            printf ("enter third integer value : ");
            scanf ("%d", &c);
            sum = a+b+c;
            avg = sum / 3;
            printf ("\n sum of three inteddger value is %d", sum);
            printf ("\n average of three integer value is %f", avg);
            return 0;
}