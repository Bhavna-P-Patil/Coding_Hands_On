/////////Write a program which is create a file////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd = creat(Fname,0777);        //System_Call(creat)  //0777 = use for permmision
	
	if(fd == -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File succesfully created\n");
	}
	
	return 0;
}