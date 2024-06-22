#include <stdio.h>
int main () {
            float pi = 3.14;
            float radius, area;
            printf ("enter area of a circle : ");
            scanf ("%f", &radius);
            area = pi * radius * radius; // pi * a-square
            printf ("area of a circle %.2f ", area);
            return 0;
}