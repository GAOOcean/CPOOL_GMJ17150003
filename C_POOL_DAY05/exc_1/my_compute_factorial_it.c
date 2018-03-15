//#include<stdio.h>

int my_compute_factorial_it(int nb)
{
	int result=1;
	if(nb>=0)
	{
		while(nb>0)
		{
			result*=nb;
			nb-=1;
		}
		return result;
	}
	else
		return 0;

}

/*int main()
{
	printf("%d\n",my_compute_factorial_it(3));
	printf("%d\n",my_compute_factorial_it(1));
	printf("%d\n",my_compute_factorial_it(0));
	printf("%d\n",my_compute_factorial_it(-8));
}*/
