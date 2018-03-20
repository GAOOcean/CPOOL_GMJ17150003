//#include<stdio.h>


char *my_strncpy(char *dest, char const *src, int n)
{
	if(NULL != dest && NULL != src)
	{
		char *result = dest;
	 	while(n && (*result++ = *src++) != '\0')
		{
			n--;
		}
		return dest;
	}
}

/*int main()
{
	char a[] = "h";
	char *b = "world";
	my_strncpy(a,b,2);
	printf("%s\n",a);
}*/