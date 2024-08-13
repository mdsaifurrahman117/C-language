#include<stdio.h>
int main  () {
            // post-increment
            int j;
            int i = 1;
            j = i++;
            printf ("i = %d \n j = %d", i, j);
            
            // pre-increment
            int a; 
            int b = 1;
            a = ++b;
            printf ("\n a = %d \n b = %d", a, b);

            return 0;
}