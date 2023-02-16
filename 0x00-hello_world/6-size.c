#include <stdio.h>
/**
 * main - A  program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
priintf("Size of a char: %lu byte(s)\n" (unsigned long)sizeof(a));
priintf("Size of an int: %lu byte(s)\n" (unsigned long)sizeof(b));
priintf("Size of a long int: %lu byte(s)\n" (unsigned long)sizeof(c));
priintf("Size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(d));
priintf("Size of a float: %lu byte(s)\n" (unsigned long)sizeof(e));
return (0);
}
