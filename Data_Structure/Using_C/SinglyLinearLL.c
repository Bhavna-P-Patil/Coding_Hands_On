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
	NODE obj;
	
	obj.data = 11;
	obj.next = NULL;
	
	PNODE p = NULL;
	p = &obj;
	
	PPNODE q = NULL;
	q = &p;
	
	return 0;
}

























