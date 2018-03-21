//#include<stdio.h>
//#include<string.h>

char *my_strcat(char *dest, char const *src)
{
	if(dest != NULL && src != NULL)
	{
		char *newstr = dest;
		while(*dest != '\0')
		{
			newstr++;
			dest++;
		}
		while(*newstr++ = *src++);
		*newstr = '\0';
		return newstr;
	}
}

/*int main()
{
	char *a = NULL;
	char b[] = "hello";
	char c[] = "worldddddddddddddddd";
	my_strcat(b,c);
	//strcat(a,b);
	printf("%s\n",b);
}*/