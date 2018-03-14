#include<stdio.h>
//#include<string.h>

char *my_evil_str(char *str)
{
	char *start = str;
	char *end = str + my_strlen(str);
	char temp;
;
	while(start<end)
	{
		temp = *start;
		*start++ = *end;	
		*end-- = temp;
	}
	return end;
}

/*int main()
{
	char c[] = "abcde";
	char *s = c;
	printf("%s\n",s);
	printf("%s\n",my_evil_str(s));
}*/