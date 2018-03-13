#include<unistd.h>

void my_putchar(char c)
{
	write(1,&c,1);
}

void my_print_revalpha(char c)
{
	while(c>='a')
	{
		my_putchar(c);
		c--;
	}
}

void main()
{

	my_print_revalpha('z');
	write(1,"\n",1);

}