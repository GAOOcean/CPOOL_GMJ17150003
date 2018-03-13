//#include<stdio.h>
#include<unistd.h>
#include"my_put.h"




int my_putstring(char *str)
{
	char *s;
	s=str;
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}

	write(1,str,len);
	//write(1,"\n",1);
	//printf("%d\n",len);
	return 0;
}

int my_putchar(int c)
{
	write(1,&c,1);
	return 0;	
}

int my_putnumber(int c)
{


	/*itoa*/
	int n;
	char str[100]= {0};
	char *p;
	p = str;
	if((n=c)<0)
		n=-n;
	do{*p++ = n%10+'0';}
	while((n=n/10)>0);
	
	if(c<0)
		*p++ = '-';
	*p = '\0';
	
	/*str.len*/
	char *s;
	s=str;
	int len = 0;
	while (*s++ != '\0')
	{
		++len;
	}

	/*reverse str*/
	char *start = str;
	char *end = str+len-1;
	while(start<end)
	{
		char tmp = *start;
		*start++ = *end;
		*end-- = tmp;
	}


	
	/*reverse str*/
	/*char *start,*end;
	char s2;
	start = str;
	end = str+len-1;
	if(str!=NULL)
	{
		while(start<end)
		{
			s2=*start;
			*start++=*end;
			*end--=s2;
		}
	}*/
	
	/*printf str*/
	write(1,str,len);
	//write(1,"\n",1);
	return 0;

}



