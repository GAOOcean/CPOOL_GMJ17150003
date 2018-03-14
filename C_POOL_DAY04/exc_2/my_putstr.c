#include<unistd.h>

int my_putstr(char const *str)
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
}

/*int main()
{
	my_putstr("asderfgh\n");
}*/