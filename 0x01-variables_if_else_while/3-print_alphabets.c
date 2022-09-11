#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints" alphabets in lower case and then upper case"
 * Return: Always(0) Success
 */
int main(void)
{
int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
