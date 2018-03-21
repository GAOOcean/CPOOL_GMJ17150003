#include<stdio.h>


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

/*int main()
{
	char a[] = "heloo";
	char *b = "world";
	my_strcpy(a,b);
	printf("%s\n%s\n",a,b);
	return 0;
}*/