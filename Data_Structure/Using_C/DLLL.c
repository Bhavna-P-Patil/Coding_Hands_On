////////////////////////////////////////////PROBLEM_STATEMENT//////////////////////////////////////

//  Doubly_Linear_Linked-List

////////////////////////////////////////////HEADER_FILE///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////HEALPER_FUNCTION/////////////////////////////////////

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head) -> prev = newn;
		
		*Head = newn;
	}
}
void InsertLast(PPNODE Head, int no)
{
	
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp->next = newn;
		newn->prev = temp;
	}
		
	
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| ->",Head->data);
		Head = Head -> next;
	}
	printf("NULL \n");
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
	if(*Head != NULL)  //LL contains atleast 1 node 
	{
		*Head = (*Head) -> next;
		free(temp);
		if(*Head != NULL)
		{
		   (*Head) -> prev = NULL;
		}
	}
}

void DeleteFirstX(PPNODE Head)
{
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head) -> next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		*Head = (*Head) -> next;
		free((*Head) -> prev);
		(*Head)->prev = NULL;
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head) -> next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
	}
}

void InsertAtPos(PPNODE Head,int no, int iPos)
{
	int size = Count(*Head);
	int i = 0;
	PNODE temp = *Head;
	PNODE newn = NULL;
	if((iPos < 1) || (iPos > size+1))
	{
		printf("Invalid position\n");
		return;
	}
	else if(iPos == size+1)
	{
		InsertLast(Head, no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->next = NULL;
		newn->prev = NULL;
		newn->data = no;
		
		for(i = 1; i<iPos-1; i++)
		{
			temp = temp->next;  
		}
		newn->next = temp->next;
		newn->next->prev = newn;
		temp->next = newn;
		newn -> prev = temp;
	}
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int size = Count(*Head);
	int i = 0;
	PNODE temp = *Head;
	if((iPos < 1) || (iPos > size))
	{
		printf("Invalid position\n");
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst(Head);
	}
	else if(iPos == size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i = 1; i<iPos-1; i++)
		{
			temp = temp -> next;  
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}

////////////////////////////////////////////ENTRY_POINT_FUNCTION/////////////////////////////////

int main()
{
	PNODE first = NULL;
	int iChoice = 1,value = 0, iRet = 0,Pos = 0;
	
	while(iChoice != 0)
	{
		printf("\n_______________________________________________________________________________\n");
		printf("Enter the desired operation that you use to perform on linked\n");
		printf("1: Insert the node at first position\n");
		printf("2: INsert the node at last position\n");
		printf("3: Insert the node at the desired position\n");
		printf("4: Delete the first node\n");
		printf("5: Delete the last node\n");
		printf("6: Delete the node at desired position\n");
		printf("7: Display the contents of linked list\n");
		printf("8: Count the number of nodes from linked list\n");
		printf("0: Terminate the application\n");
		printf("\n_______________________________________________________________________________\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
			  printf("Enter the data to insert\n");
			  scanf("%d",&value);
			  InsertFirst(&first,value);
			  break;
			  
			  case 2:
			  printf("Enter the data to insert last\n");
			  scanf("%d",&value);
			  InsertLast(&first,value);
			  break;
			  
			  case 3:
			  printf("Enter the data to insert\n");
			  scanf("%d",&value);
			  printf("Enter the position\n");
			  scanf("%d",&Pos);
			  InsertAtPos(&first,value,Pos);
			  break;
			  
			  case 4:
			  DeleteFirst(&first);
			  break;
			  
			  case 5:
			  DeleteLast(&first);
			  break;
			  
			  case 6: 
			  printf("Enter the postion\n");
			  scanf("%d",&Pos);
			  DeleteAtPos(&first,Pos);
			  break;
			  
			  case 7:
			  printf("Elements of linked list are \n");
			  Display(first);
			  break;
			  
			  case 8: 
			  iRet = Count(first);
			  printf("Number of elements are : %d\n",iRet);
			  break;
			  
			  case 0:
			  printf("Thank for using Marvellous Linked List\n");
			  break;
			  
			  default:
			  printf("Please enter proper choice\n");
			  break;
		}
	}
	
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



























