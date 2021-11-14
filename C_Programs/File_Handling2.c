/////////Write a program which is Open the file////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);  //System_Call(open) // O_RDWR is macro 
	
	if(fd == -1)
	{
		printf("Unable to create open file\n");
	}
	else
	{
		printf("File succesfully opened with FD : %d\n",fd);
	}
	
	return 0;
}