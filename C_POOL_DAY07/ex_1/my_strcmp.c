#include<stdio.h>
//#include<string.h>

int my_strcmp(char const *s1,char const *s2)
{
	if((NULL != s1) && (NULL != s2))
	{
		int ret = 0;
		while(*s1 == *s2)
		{
			s1++;
			s2++;
			if(*s1 == '\0')
				return 0;
		}
		ret = *s1 - *s2;
		return ret;
	}
}

/*int main()
{
	char a[] = "hello";
	char b[] = "hello";
	char c[] = "helooo";
	int m = my_strcmp(a,b);
	int n = my_strcmp(a,c);
	int q = strcmp(a,b);
	int p = strcmp(a,c);
	printf("%d\n%d\n%d\n%d\n",m,n,q,p);
	
	
	
}*/


