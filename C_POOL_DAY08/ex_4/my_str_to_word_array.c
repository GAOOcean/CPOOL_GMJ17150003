#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int my_putstr(char const *str)
{
	for(int i = 0; str[i] != '\0'; i++)
	{
		write(1,&str[i],1);
	}
	return 0;
}


char **my_str_to_word_array(char const *str)
{
	char *tmp = malloc(sizeof(tmp));
	while(*str != '\0')
	{
		*tmp = *str;
		//if((str[i] >= 'z' && str[i] <= 'a') || (str[i] >= 'Z' && str[i] <= 'A'))
		if(str = "_")
			return 0;
		str++;
	}
	
}


int main()
{
	char p[] = "hello_world";
	my_str_to_word_array(p);
	for(int i = 0;i < strlen(p);i++)
	{
		my_putstr(&p[i]);
		my_putstr("\n");
	}

	

}