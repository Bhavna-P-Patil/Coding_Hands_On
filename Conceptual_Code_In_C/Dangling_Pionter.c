#include<stdio.h>

int main()
{
	int *p = NULL;
	int *q = NULL;
	
	p = (int *)malloc(sizeof(int) * 5);
	
	q = p;
	
	free(p);
	p = NULL;
	
	return 0;
}