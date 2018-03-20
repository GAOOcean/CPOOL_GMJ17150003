//#include<stdio.h>

int my_str_islower(char const *str)
{
	if(str == NULL)
		return 1;
	for(int i=0; str[i] != '\0';i++)
	{
		if(str[i] <= 'z' && str[i] >= 'a')
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
	char *b = "helloworld";
	printf("%d\n",my_str_islower(a));
	printf("%d\n",my_str_islower(b));
}*/