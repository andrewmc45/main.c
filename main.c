#include <stdio.h>
#include <stdint.h>

int main() {
    //char c;
    //printf("Enter a character: ");
    //scanf("%c", &c);

    // %d displays the integer value of a character
     //%c displays the actual character
    //printf("ASCII value of %c = %d\n", c, c);
    //printf(" ASCII hexadecimal value of %c = %x", c, c);
//used code for refrence for above https://www.programiz.com/c-programming/examples/ASCII-value-character

    char ch = 'a';
    printf("ch = %hhi, %x\n", ch, ch, ch);
    char ch1 = 'A';
    printf("ch1 = %hhi, %x\n", ch1, ch1, ch1);
    char ch2 = 'z';
    printf("ch2 = %hhi, %x\n", ch2, ch2, ch2);
    char ch3 = 'Z';
    printf("ch3 = %hhi, %x\n", ch3, ch3, ch3);


}


