//#include<stdio.h>

char *my_strupcase(char *str)
{
	if(str != NULL)
	{
		for(int i=0; str[i] != '\0';i++)
		{
			if((str[i] <= 'z' && str[i] >= 'a'))	
				str[i]-=32;
			else
				continue;
		}
		return str;
	}
}

/*int main()
{
	char a[] = "hello world,I am C-language!";
	my_strupcase(a);
	printf("%s\n",a);
}*/