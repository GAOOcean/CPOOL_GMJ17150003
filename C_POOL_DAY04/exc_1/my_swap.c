#include<stdio.h>
#include<unistd.h>

/*int my_putstr(char const *str)
{
	char const *s;
	s=str;
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}
	write(1,str,len);
	return 0;
}*/

/*int my_putchar(char c)
{
	write(1,&c,1);
}*/


int my_put_nbr(int n)
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


void my_swap(int *a,int *b)
{
	my_putstr("a=");
	my_put_nbr(*a);
	my_putstr(",b=");
	my_put_nbr(*b);
	my_putchar('\n');	
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
	my_putstr("after swap\na=");
	my_put_nbr(*a);
	my_putstr(",b=");
	my_put_nbr(*b);
	my_putchar('\n');	
}

/*int main()
{

	int a=6;
	int b=0;
	my_swap(&a,&b);

}*/