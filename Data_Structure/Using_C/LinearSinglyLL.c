////////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////

//  Linear_Singly_Linked-List

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
	PNODE First = NULL; // struct node * First = NULL;     //Memory allocate in main function's stack frame
	
	return 0;
}