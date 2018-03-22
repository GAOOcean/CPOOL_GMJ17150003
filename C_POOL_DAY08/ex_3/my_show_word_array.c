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

int main()
{
	char *test_word_array[] = {"My", "Age", "always", "is", "18", 0};
	my_show_word_array(test_word_array);
}