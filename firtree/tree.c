#include<unistd.h>

int my_putchar(char c)
{
	write(1,&c,1);
}

void head(int col[], int row, int max)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<(max-col[i])/2;j++)
			my_putchar(' ');
		for(int k=0;k<col[i];k++)
			my_putchar('*');
		my_putchar('\n');
	}
}

void root(int max, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(max-n)/2;j++)
			my_putchar(' ');
		for(int k=0;k<n;k++)
			my_putchar('|');
		my_putchar('\n');
	}
}

void tree(int size)
{
	if(size == 0)
		return;
	int RowN = ((7+size)*size)/2;
	int col[RowN];
	col[0] = 1;
	int j=0, init=1, increment=2;
	for(int i=1;i <= size;i++)
	{
		for(int r=0;j<(((7+i)*i)/2);j++,r++)
			col[j] = init+increment*r;
		init = col[j-1] - 2;
	}
	int max = col[j-1];
	head(col,RowN,max);
	root(max,size);
}


int main(int argc,char *argv[])
{
	int i = *argv[1]-48;
	tree(i);
}

