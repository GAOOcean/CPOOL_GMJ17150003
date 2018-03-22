#include<stdio.h>
#include<stdlib.h>


int my_strlen(const char *s);
/*{
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}
	return len;
}*/

char *my_strcpy(char *dest,char const *src);
/*{
	if(NULL != dest && NULL != src)
	{ 
		char *result = dest;
		while((*dest++ = *src++) != '\0')
		{
			NULL;
		}
		return result;
	}
}*/

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



/*int main()
{
	char *a = "hello world";
	char *b = NULL;
	b = my_strdup(a);
	printf("%s\n",b);
}*/
