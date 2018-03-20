//#include<stdio.h>

int my_str_isnum(char const *str)
{
	if(str == NULL)
		return 1;
	for(int i=0; str[i] != '\0';i++)
	{
		if(str[i] <= '9' && str[i] >= '0')
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
	char *a = "44546hello world,i am c-language!";
	char *b = "8764914";
	printf("%d\n",my_str_isnum(a));
	printf("%d\n",my_str_isnum(b));
}*/