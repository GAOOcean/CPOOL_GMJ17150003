//#include<stdio.h>

int my_compute_factorial_rec(int nb)
{
	int result=0;
	if(nb>=0)
	{
		if(nb==0)
			result=1;
		else
			result = my_compute_factorial_rec(nb-1)*nb;
	}
	else 
		result=0;
	return result;
}

/*int main()
{
	printf("%d\n",my_compute_factorial_rec(3));
}*/
