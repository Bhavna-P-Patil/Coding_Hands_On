#include<stdio.h>

int main()
{
	int no = 11;
	double d = 3.14;
	
	int *ip = &no;  //*ip have 4bytes (specific pointer)
	double *dp = &d; //*dp hv 8bytes
	
	void *vp = &no; //*vp do not hv size (generic)
	
	printf("%d\n",*ip);
	printf("%f\n",*dp);
	
	printf("%d\n",*(int *)vp);  //(int *)is called type casting
    
    vp = &d;
    printf("%f\n",*(double *)vp);
	
	dp = &no;
	printf("%d\n",*(int *)dp);
	
	ip = &d;
	printf("%f\n",*(double *)ip);
	
	printf("Adress of d:%f\n",&d)
	return 0;
}