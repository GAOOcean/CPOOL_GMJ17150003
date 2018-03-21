#include<stdio.h>

int my_str_isprintable(char const *str)
{
	if(str == NULL)
		return 1;

	for(int i=0; str[i] != '\0';i++)
	{
		if(str[i] >= 0x20 && str[i] < 0x7f)//32-127
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
	char *b = "\n";
	char *c = NULL;
	printf("%d\n",my_str_isprintable(a));
	printf("%d\n",my_str_isprintable(b));
	printf("%d\n",my_str_isprintable(c));
}*/