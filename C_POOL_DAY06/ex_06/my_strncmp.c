//#include<stdio.h>
//#include<string.h>

int my_strncmp(char const *s1, char *s2, int n)
{
	if((NULL != s1) && (NULL != s2))
	{
		int ret = 0;
		while (n--)
		{
			if (*s1 == *s2)
			{
				s1++;
				s2++;
			}
		}
		ret = *s1 - *s2;
		return ret;
	}

}


/*int main()
{
	char a[] = "hello";
	char b[] = "hello";
	char c[] = "hilooo";
	int m = my_strncmp(a,b,2);
	int n = my_strncmp(a,c,2);
	int q = strncmp(a,b,2);
	int p = strncmp(a,c,2);
	printf("%d\n%d\n%d\n%d\n",m,n,q,p);	
}*/


