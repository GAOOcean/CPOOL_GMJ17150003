//#include<stdio.h>

int my_compute_power_rec(int nb,int p)
{
	if(p>0)
	{
		nb = my_compute_power_rec(nb,p-1)*nb;
		return nb;
	}
	else if(p==0)
		return 1;
	else
		return 0;
	
}

/*int main()
{
	printf("%d\n",my_compute_power_rec(5,3));
	printf("%d\n",my_compute_power_rec(5,0));
	printf("%d\n",my_compute_power_rec(5,-1));
	printf("%d\n",my_compute_power_rec(-7,2));
	printf("%d\n",my_compute_power_rec(-5,3));
	printf("%d\n",my_compute_power_rec(0,3));
}*/