//#include<stdio.h>

int my_compute_power_it(int nb,int p)
{
	int temp=nb;
	if(p>0)
	{
		for(int i=1;i<p;i++)
		{
			nb=nb*temp;
		}
		return nb;
	}
	if(p==0)
		return 1;
	else
		return 0;

}

/*int main()
{
	printf("%d\n",my_compute_power_it(5,2));
	printf("%d\n",my_compute_power_it(5,0));
	printf("%d\n",my_compute_power_it(5,-1));
	printf("%d\n",my_compute_power_it(-7,2));
	printf("%d\n",my_compute_power_it(-5,3));
	printf("%d\n",my_compute_power_it(0,3));
}*/