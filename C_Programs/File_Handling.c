/////////Write a program which is create a file////////////

#include<stdio.h>
#include<stdlib.h>
//#include<io.h>
#include<unistd.h>

int main()
{
	int fd = 0;
	
	fd = creat("Marvellous.txt",0777);
	
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