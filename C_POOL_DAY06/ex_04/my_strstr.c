//#include<stdio.h>
//#include<string.h>

char *my_strstr(char *str, char const *to_find)
{
	if(str != NULL && to_find != NULL)
	{
		char *flag = NULL;
		while(*str != '\0')
		{
			char *dest = str;
			char const *src = to_find;
			if(*dest == *src)
			{
				flag = dest;
				while(*dest && *src && *dest++ == *src++)
				{
					if(*src == '\0')
						return flag;
				}
			
			}
			str++;
		}
	}

}

/*int main()
{
	char a[] = "hello woarld world";
	char *b = "wor";
	//char *c = strstr(a,b);	
	char *c=my_strstr(a,b);
	printf("%s\n",c);

}*/