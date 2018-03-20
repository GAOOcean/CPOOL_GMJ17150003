//#include<stdio.h>

char *my_strlowcase(char *str)
{
	if(str != NULL)
	{
		for(int i=0; str[i] != '\0';i++)
		{
			if((str[i] <= 'Z' && str[i] >= 'A'))	
				str[i]+=32;
			else
				continue;
		}
		return str;
	}
}

/*int main()
{
	char a[] = "HELLO WORLD,I Am C-Language!";
	char *b = NULL;
	my_strlowcase(a);
	printf("%s\n",a);
	my_strlowcase(b);
	printf("%s\n",b);
}*/