#include<unistd.h>

int my_putchar(char c);
/*{
	write(1,&c,1);
}*/

int my_isneg(int n)
{
	if(n<0)
	{
		my_putchar('N');
		write(1,"\n",1);
	}
	else
	{
		my_putchar('P');
		write(1,"\n",1);
	}
}



