#include<unistd.h>
#include"my_print_alpha.h"


int my_putchar(char c)
{
	write(1,&c,1);
	return 0; 
}

int my_print_alpha(char c)
{
	while(c<='z')
	{
		my_putchar(c);
		c++;
	}
	return 0;
}

/*void main()
{
	my_print_alpha('a');
	write(1,"\n",1);
}*/
