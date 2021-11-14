////////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////

//  BasicCode of Linear_Singly_Linked-List

////////////////////////////////////////////HEADER_FILE///////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////HEALPER_FUNCTION/////////////////////////////////////
//Self-reffrencial structure
struct node              // memory allocate in heap section
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


////////////////////////////////////////////ENTRY_POINT_FUNCTION/////////////////////////////////

int main()
{
	PNODE p = NULL;
	PPNODE q = NULL:
	
	p = (PNODE)malloc(sizeof(NODE));
	q = &p;
	
	return 0;
}

























