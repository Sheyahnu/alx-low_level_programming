#include<stdio.h>

/**
 * main - Entry point
 * Description: 'the program's descriptioni'
 * Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
long int longint;
char charType;
long long int longlongint;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
