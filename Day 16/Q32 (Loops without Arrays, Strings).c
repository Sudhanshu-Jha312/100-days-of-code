/* Write a program to check if a number is a palindrome. */
#include <stdio.h>

int main(void)
{
    long number, original, reversed = 0;
    if (scanf("%ld", &number) != 1 || number < 0) return 1;
    original = number;
    while (number != 0) { reversed = reversed * 10 + number % 10; number /= 10; }
    puts(original == reversed ? "Palindrome" : "Not palindrome");
    return 0;
}
