#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int my_putstr(char const *str)
{
	for(int i = 0; str[i] != '\0'; i++)
	{
		write(1,&str[i],1);
	}
	return 0;
}

int my_show_word_array(char *const *tab)
{
	char *tmp = malloc(sizeof(tmp));
	for(int i = 0; tab[i] != 0; i++)
	{
		tmp = tab[i];
		my_putstr(tmp);
		my_putstr("\n");
	}
	return 0;	
}

int my_strlen(const char *s)
{
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}
	return len;
}

char *my_strcpy(char *dest,char const *src)
{
	if(NULL != dest && NULL != src)
	{ 
		char *result = dest;
		while((*dest++ = *src++) != '\0')
		{
			NULL;
		}
		return result;
	}
}

char *my_strdup(char const *src)
{
	char *tmp = NULL;  
	if (src && (tmp = malloc(my_strlen(src) + 1)))
	{
		my_strcpy(tmp, src);  
		return tmp;
	}
	free(tmp);	
}

struct info_param
{
	int length;
	char *str;
	char *copy;
	//char **word_array;
}

struct info_param *my_params_to_array(int ac, char **av)
{
	struct info_param *info;
	
	if(ac == 2)
	{
		for(int i = 0; i < ac; i++)
		{
			info->length = sizeof(av[1]);
			info->str = av[1];
			info->copy = my_strdup(av[1]);
			//info.word_array = my_str_to_word_arra(av[a]);
		
		}
	}
	else
		return 0;
	return info;
}

int main(int ac, char **av)
{
	struct info_param *test;
	test = my_params_to_array(ac, av);
	my_show_word_array(test);
}

