//#include<unistd.h>

int my_putstr(char const *str);
/*{
	for(int i = 0; str[i] != '\0'; i++)
	{
		write(1,&str[i],1);
	}
	return 0;
}*/

int main(int ac, char **av)
{

	for(int i = ac-1; i >= 0; i--)
	{
		my_putstr(av[i]);
		my_putstr("\n");		
	}
}