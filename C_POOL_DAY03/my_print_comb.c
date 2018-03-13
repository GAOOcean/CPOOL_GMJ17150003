//#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1,&c,1);
}


void main()
{
	int i,j,k;
	
	for(i=0;i<=7;i++)
	{

		for(j=1;j<=8;j++)
		{
			if(j==i)
				continue;
			for(k=2;k<=9;k++)
			{
				if(k==j||k==i)
					continue;
				if(i<j&&j<k)
				{

					char I=i+'0';
					char J=j+'0';
					char K=k+'0';
					my_putchar(I);
					my_putchar(J);
					my_putchar(K);
					if(i==7 && j==8 && k==9)
					{
						my_putchar('\n');
						continue;
					}
					my_putchar(',');

					//printf("%d%d%d,",i,j,k);
				}
				else
					continue;
			}
		}
	}
}


