#include<stdio.h>


void my_swap(int *a,int *b)
{	
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

/*int main()
{

	int a=6;
	int b=0;
	printf("a:%d,b:%d\n",a,b);
	my_swap(&a,&b);
	printf("after swap\na:%d,b:%d\n",a,b);

}*/