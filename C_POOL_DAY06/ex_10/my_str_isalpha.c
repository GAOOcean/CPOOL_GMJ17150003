//#include<stdio.h>

int my_str_isalpha(char const *str)
{
	if(str == NULL)
		return 1;
	for(int i=0; str[i] != '\0';i++)
	{
		if((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A'))
		{
			if(str[i+1] == '\0')
				return 1;
			else
				continue;
		}
		else
		{
			return 0;
			//break;
		}
	}

}

/*int main()
{
	char a[] = "hello world,i am c-language!";
	char *b = "HelloWorld";
	printf("%d\n",my_str_isalpha(a));
	printf("%d\n",my_str_isalpha(b));
}*/