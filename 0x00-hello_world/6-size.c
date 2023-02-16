#include <stdio.h>
/**
 * main - Program that prints the size of various types when compiled on
 * Return: 0 (Sucess)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
