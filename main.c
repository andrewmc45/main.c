#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);
    printf(" ASCII hexadecimal value of %c = %x", c, c);
}


//used code for refrence https://www.programiz.com/c-programming/examples/ASCII-value-character