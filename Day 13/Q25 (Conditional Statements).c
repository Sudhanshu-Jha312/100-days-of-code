/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>

int main(void)
{
    long first, second;
    char operation;
    if (scanf("%ld %ld %c", &first, &second, &operation) != 3) return 1;
    switch (operation) { case '+': printf("%ld\n", first + second); break; case '-': printf("%ld\n", first - second); break; case '*': printf("%ld\n", first * second); break; case '/': if (second == 0) return 1; printf("%ld\n", first / second); break; case '%': if (second == 0) return 1; printf("%ld\n", first % second); break; default: return 1; }
    return 0;
}
