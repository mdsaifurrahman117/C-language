#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
            int a, s = 0, n;
            printf ("value of n ");
            scanf ("%d", &n);
            for (a = 1; a <= n; a++)
            {
                        s = s + a * a;
            }
            printf ("sum %d", s);
            
            return 0;
}