#include <stdio.h>
/**
 * main - Program that prints the size of various types when it is compiled on
 * Return: 0 (Sucess)
 */
int main(void)
{
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(char));
printf("size of int:%lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
