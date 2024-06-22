// showing frist name and last name

#include <stdio.h>
int main() {
            char f_name [20];
            char l_name [20];
            printf ("enter your frist name : ");
            scanf ("%s", &f_name);
            printf ("\n enter your last name : ");
            scanf ("%s", &l_name);
            printf ("\n your full name is %s %s", f_name, l_name);
            return 0;
}