#include<stdio.h>
/**
 *main - prints the size of various types on the computer it is compiled
 *Return: 0 (Success)
 */
int main(void)
{

printf("size of char : %d bytes\n", (unsigned long)sizeof(char));
printf("size of int : %d bytes\n", (unsigned long)sizeof(int));
printf("size of long int : %d bytes\n", (unsigned long)sizeof(long int));
printf("size of long long int : %d bytes\n", (unsigned long)
		sizeof(long long int));
printf("size of float : %d bytes\n", (unsigned long)sizeof(float));
return (0);
}
