#include<unistd.h>

int my_putchar(char c)
{
	write(1,&c,1);
}
int my_print_digits(void)
{
	char c='0';
	while(c<='9')
	{
		my_putchar(c);
		c++;
	}
}

