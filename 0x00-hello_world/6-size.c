#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer it is compiled and run on
 * Return: 0 (Sucess)
 */
int main(void)
{
printf("Size of a char:%lu byte(s)\n", sizeof(char));
printf("size of int:%lu byte(s)\n", sizeof(int));
printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
printf("Size of a long long int:%lu byte(s)\n", sizeof(long long int));
printf("Size of a float:%lu byte(s)\n", sizeof(float));
return (0);
}
