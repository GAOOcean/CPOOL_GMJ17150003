#include<stdio.h>

int my_compute_square_root(int nb)
{
	int n=nb;
	if(n*n != nb)
	{
		n = my_compute_square_root(n);
	}
	else if(n*n == nb)
	{
		return n;
	}
}

int main()
{
	printf("%d\n",my_compute_square_root(25));
}