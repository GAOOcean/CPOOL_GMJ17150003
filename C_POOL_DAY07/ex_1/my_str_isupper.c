#include<stdio.h>

int my_str_isupper(char const *str)
{
	if(str == NULL)
		return 1;
	for(int i=0; str[i] != '\0';i++)
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
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
	char *b = "HELLOWORLD";
	char *c = NULL;
	printf("%d\n",my_str_isupper(a));
	printf("%d\n",my_str_isupper(b));
	printf("%d\n",my_str_isupper(c));
}*/