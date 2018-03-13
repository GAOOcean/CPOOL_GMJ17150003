#include<unistd.h>

void my_putchar(char c)
{
	write(1,&c,1);
}

void my_print_digits(int c)
{
	while(c<='9')
	{
		my_putchar(c);
		c++;
	}
}


void main()
{
	my_print_digits('0');
	write(1,"\n",1);
}