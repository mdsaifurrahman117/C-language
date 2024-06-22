#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
//  sum and average of three number
           /* int a, b, c, sum;
            float avg;
            printf("enter a \n");
            scanf("%d", &a);
            printf("enter b \n");
            scanf("%d", &b);
            printf("enter c \n");
            scanf("%d", &c);

            sum = a+b+c;
            printf("sum of a, b & c is : %d \n", sum);
            avg = sum / 3;
            printf ("avgrage of a, b, c is : %f \n", avg); */

// showing entered capital and small letter
            /* char charecter;
            printf ("enter a charecter : ");
            scanf ("%c", &charecter);
            if (charecter >= 'A' && charecter <= 'Z')
            {
                        printf("you enterd a capital letter : %c", charecter);
            }
            else if (charecter >= 'a' && charecter <= 'z')
            {
                        printf("you entered a small letter : %c", charecter);
            }
            else
            {
                        printf ("the letter you entered is not a letter");
            }*/

// showing entered letter 
            /*char letter;
            printf ("enter a letter ");
            letter = getchar();
            printf ("you entered the letter : %c",  letter); 

// area of a square
             int side;
            printf ("enter side value of a square : ");
            scanf ("%d", &side);
            printf ("area of a square : %d", side * side); */

// area of a circle
            /* float radius;
            printf ("enter value of circle : ");
            scanf("%f", &radius);
            printf("value of a circle : %f", 3.14 * radius * radius); */


// a+b hole square 
           /* int a = 2;
            int b = 3;
            int res = a * a + 2 * a * b + b * b; */

// a+b hole quebe
           /* int a, b;
            printf ("enter value of a \n");
            scanf ("%d", &a);

            printf ("enter value of b \n");
            scanf ("%d", &b);
            // int res = a * a * a + 3 * a * a * b + 3 * a * b * b + b * b * b;
            int res_1 = a * a * a; 
            printf ("the value of a quebe is %d \n", res_1);

            int res_2 = 3 * a * a * b;
            printf ("the value of 3 a square b is %d \n", res_2);

            int res_3 = 3 * a * b * b;
            printf ("the value of 3 a  b square is %d \n", res_3);

            int res_4 = b * b * b;
            printf ("the value of b quebe is %d \n", res_4);

            int sum = res_1 + res_2 + res_3 + res_4;
            printf ("the result of a + b hole quebe is %d", sum); */

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