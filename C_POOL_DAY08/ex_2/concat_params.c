#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


char *my_strcat(char *dest, char const *src);
/*{
	if(dest != NULL && src != NULL)
	{
		char *newstr = dest;
		while(*dest != '\0')
		{
			dest++;
		}
		while(*dest++ = *src++);
		*dest = '\0';
		return newstr;
	}
}*/

char *concat_params(int argc, char **argv)
{
	char *tmp = malloc(sizeof(tmp));//
	for(int i = 0; i < argc; i++)
	{
		tmp = my_strcat(tmp, argv[i]);
		tmp = my_strcat(tmp,"\n");
	}
	return tmp;
	free(tmp);

	
}

/*int main(int ac, char **av)
{
	my_putstr(concat_params(ac,av));
	return (EXIT_SUCCESS);
}*/