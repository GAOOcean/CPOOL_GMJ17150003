#include<stdio.h>
//#include<string.h>


char *my_strncat(char *dest, char const *src, int nb)
{
	if(dest != NULL && src != NULL)
	{
		char *newstr = dest;
		while (*dest != '\0')
		{
			dest++;
			newstr++;
		}
		while (nb--)
		{
			*newstr = *src;
			newstr++;
			src++;
		}
		*newstr = '\0';
		return newstr;
	}
}

/*int main()
{
	char *a = NULL;
	char b[] = "hello";
	char c[] = "worldddddddddddddddd";
	my_strncat(b,c,5);
	printf("%s\n",b);
}*/