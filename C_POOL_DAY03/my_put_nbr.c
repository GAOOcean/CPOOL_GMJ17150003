#include<unistd.h>
#include<stdio.h>

void my_putchar(char c)
{
	write(1,&c,1);
}


void my_put_nbr(int n)
{
	if(n>=0)
	{
		if(n>=10)
		{
			my_put_nbr(n/10);
			char c=n%10+'0';
			my_putchar(c);
		}
		if(n<10)
		{
			char c=n+'0';
			my_putchar(c);
		}
	}
	if(n<0)
	{
		my_putchar('-');
		n=-n;
		my_put_nbr(n);
	}

}

int main()
{
	my_put_nbr(8274);
	my_putchar('\n');
	my_put_nbr(0);
	my_putchar('\n');
	my_put_nbr(-894);
	my_putchar('\n');
}