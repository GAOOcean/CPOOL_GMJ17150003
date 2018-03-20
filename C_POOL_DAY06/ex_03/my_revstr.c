//#include<stdio.h>

int my_strlen(const char *s);

char *my_revstr(char *str)
{
	if(NULL != str)
	{
		char *start = str;
		char *end = str + my_strlen(str)-1;
		char temp;
		if(str != NULL)
		{
			while(start<end)
			{
				temp = *start;
				*start++ = *end;	
				*end-- = temp;
			}
		}
		return str;
	}
}


/*int main()
{
	char c[] = "abcde";
	printf("%s\n",c);
	printf("%s\n",my_revstr(c));
}*/