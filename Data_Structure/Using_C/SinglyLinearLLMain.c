////////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////

//  Singly_Linear_Linked-List

////////////////////////////////////////////HEADER_FILE///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////HEALPER_FUNCTION/////////////////////////////////////

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;    
	
	//Step 1 : Allocate the memory
	newn = (PNODE)malloc(sizeof(NODE));

    //Step 2 : Initialize the NOde
    newn->data = no;
    newn->next = NULL;

    //Step 3 : Insert the node
    if(*Head == NULL)  //
	{
		*Head = newn;
	}
	else  //LL contains atleast one node
	{
		newn->next = *Head;
		*Head = newn;
	}	
}
void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;    
	PNODE temp = *Head;
	//Step 1 : Allocate the memory
	newn = (PNODE)malloc(sizeof(NODE));

    //Step 2 : Initialize the NOde
    newn->data = no;
    newn->next = NULL;

    //Step 3 : Insert the node
	if(*Head == NULL)  //
	{
		*Head = newn;
	}
	else  //LL contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp->next = newn;
	}
	
}    

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head->data);
		Head = Head -> next;
	}
}

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	
	if(*Head != NULL)   //If LL contains atleast one node
	{
		*Head = (*Head) -> next;
		free(temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PPNODE temp = *Head;
	if(*Head == NULL)  //LL is empty
	{
		return;
	}
	else if(*Head -> next == NULL)  // LL contains only one node
	{
		free(*Head);
		*Head = NULL;
	}
	else  // LL contains more than one node
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);  
		temp -> next = NULL;
	}
}

////////////////////////////////////////////ENTRY_POINT_FUNCTION/////////////////////////////////

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,101);   //InsertFirst(50,101);
	InsertFirst(&first,51);   //InsertFirst(50,51);
	InsertFirst(&first,21);   //InsertFirst(50,21);
	InsertFirst(&first,11);   //InsertFirst(50,11);
    	
	InsertLast(&first,111);   //InsertFirst(50,111);
    Display(first);
	iRet = Count(first);
	
	printf("\n Number of elements are : %d\n",iRet);
    
	DeleteFirst(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Number of elements are : %d\n",iRet);
	
	DeleteLast(&first);
	Display(first);
	iRet = Count(first);
	printf("\n Number of elements are : %d\n",iRet);
    
	
	return 0;
}


/* 
   void InsertFirst(PPNODE Head, int no) Head is parameter
   void INsertLast(PPNODE Head, int no)
   void InsertAtPos(PPNODE Head, int no, int POs)
   
   void DeleteFirst(PPNODE Head)
   void DeleteLast(PPNODE Head)
   void DeleteAtPOs(PPNODE Head, int Pos)
   
   void Display(PNODE Head)
   int Count(PNODE Head)
*/   



























