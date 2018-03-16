//#include<stdio.h>

int my_find_prime_sup(int nb)
{
	int p;
	if(nb<=0)
		return 1;
	else if(nb>0)
	{
		while(nb++)
		{
			if(nb>2 && !(nb&1) || nb<2)
				continue;
			for(p=3;p*p<=nb;p+=2)
			{
				if(!(nb%p))
					break;
			}
			if(p*p<=nb)
				continue;
			break;		
		}
		return nb;
	}
}


/*int main()
{
	printf("%d\n",my_find_prime_sup(7));
	printf("%d\n",my_find_prime_sup(-2));
	printf("%d\n",my_find_prime_sup(0));
	printf("%d\n",my_find_prime_sup(2));
	printf("%d\n",my_find_prime_sup(16));
	printf("%d\n",my_find_prime_sup(8));
	printf("%d\n",my_find_prime_sup(4));
	printf("%d\n",my_find_prime_sup(25));

}*/

