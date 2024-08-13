#include <stdio.h>
int main() {
            char letter;
            printf ("enter a character  : ");
            scanf ("%c", &letter);
            if ((letter >= 'A') &&  (letter <= 'Z'))
                        printf ("you entered a capital letter %c", letter);
            else if ((letter >= 'a') && (letter <= 'z'))
                        printf ("you entered a small letter %c", letter);
            else ("the letter you entered is not a character");
            return 0;
}