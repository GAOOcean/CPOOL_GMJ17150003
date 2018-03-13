#include<unistd.h>

int my_putchar(char c)
{
	write(1,&c,1);
}

int my_print_alpha(char c)
{
	while(c<='z')
	{
		my_putchar(c);
		c++;
	}
}



void main()
{
	my_print_alpha('a');
	write(1,"\n",1);
}
