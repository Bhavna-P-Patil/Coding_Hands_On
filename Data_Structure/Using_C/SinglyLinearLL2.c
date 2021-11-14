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

void fun(PNODE p)
{
	
}
void gun(PPNODE q)
{
	
}

////////////////////////////////////////////ENTRY_POINT_FUNCTION/////////////////////////////////

int main()
{
	PNODE First = NULL;
	
	//Call by value
	fun(First);        //Display() , Count()
	
	//Call by address
	gun(&First);      //InsertFirst(), InsertLast(), InsertAtPos(), DeleteFirst(), DeleteLast(), DeleteAtPos();
	
	return 0;
}

























