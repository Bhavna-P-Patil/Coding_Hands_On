#include<stdio.h>

int main
{
    typedef int NUMBER;
    typedef int *PNUMBER;
    typedef int **PPNUMBER;
	
	NUMBER i = 11;
	PNUMBER p= &i;
	PPNUMBER q = &p;
	
	return 0;
}	