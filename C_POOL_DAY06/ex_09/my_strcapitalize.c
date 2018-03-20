//#include<stdio.h>

char *my_strcapitalize(char *str)
{
	if(str != NULL)
	{
		if(str[0])
			str[0]-=32;
		for(int i=0; str[i+1] != '\0';i++)
		{
			if((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
				continue;	
			str[i+1]-=32;
		}
		return str;
	}
}

/*int main()
{
	char a[] = "hello world,i am c-language!";
	my_strcapitalize(a);
	printf("%s\n",a);
}*/