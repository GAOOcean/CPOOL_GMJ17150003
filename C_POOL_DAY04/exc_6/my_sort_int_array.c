#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], const int size)
{
	printf("The current array is:\n");
	int count = 0;
	for (count = 0; count < size; count++)
	{
		printf("%d ", array[count]);
	}
	printf("\n");
}

/*void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}*/

void my_sort_int_arry(int *array,int size) 
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


/*int main()
{
	int c[5]={10,34,99,5,23};
	my_sort_int_arry(c, 5);
	printArray(c, 5);
	return 0;
}*/