#include <stdio.h>
int main () {
            int my_age;
            float grade_point;
            my_age = 20;
            grade_point = 4.00;
            printf ("my age is  %d", my_age);
            printf ("\n my grade point is %2.f", grade_point);
            return 0;   

            // sum of two number 
            int a, b;
            printf ("enter a : ");
            scanf ("%d", &a);
            printf ("enter b : ");
            scanf ("%d", &b);

            int sum = a + b;
            printf ("sum of a and b is %d", sum);
            return 0;   

            // area of a square 
            int side;
            printf ("enter side : ");
            scanf ("%d", &side);

            printf ("area of a square is %d", side*side);
            return 0;   

            // area of a circle 
            float radius;
            printf ("enter radius : ");
            scanf ("%f", &radius);
            printf ("radius of a circle is %f", 3.14 * radius * radius);
            return 0;   

}