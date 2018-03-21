#include<stdio.h>
#include<unistd.h>

int my_putstr(char const *str)
{
	for(int i = 0; str[i] != '\0'; i++)
	{
		write(1,&str[i],1);
	}
	return 0;
}

void swap(char *p1, char *p2)
{
	char temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void my_sort_int_arry(char *array,int size) 
{
	int j, k;
	for (j=0;j < size-1;j++) 
	{
        	for (k=0;k < size-1-j;k++) 
		{
			if (array[k] > array[k + 1]) 
			{
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}

int main(int ac, char **av)
{
	my_putstr(av[0]);
	my_putstr("\n");
	int j,k;
	int flag = ac;
	for(j=1;j < flag - 1;j++)
	{
		for (k=1;k < flag-j;k++)
		{
			char *tmp;
			if(av[k] > av[k + 1])
			{
				/*tmp = av[k];
				av[k] = av[k + 1];
				av[k + 1] = tmp;*/
				swap(av[k], av[k + 1]);
			}
		}
	}
	//my_sort_int_arry(*av,ac);
	for(int i; i < ac; i++)
	{
		my_putstr(av[i]);
		my_putstr("\n");
	}

}