#include<stdio.h>

int my_is_prime(int nb)
{
	int i;
	for (i=2;i<=(nb/2);i++)
	{
		if (nb%i == 0)
			return 0;
		else
			return 1;
	}
	
}

int main()
{
	printf("%d\n",my_is_prime(7));
	printf("%d\n",my_is_prime(-1));
	printf("%d\n",my_is_prime(0));
	printf("%d\n",my_is_prime(2));
	printf("%d\n",my_is_prime(16));
	printf("%d\n",my_is_prime(4));
	printf("%d\n",my_is_prime(13));

}
