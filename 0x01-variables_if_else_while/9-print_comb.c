#include <stdio.h>
/**
* main - main function
*
* Return: 0
*/
int main(void)
{
int i = 0;
for (i = 48; i < 58; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
