/////////Write a program which is Open and close the file////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[30];
	char Data[7];
	
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);  
	
	if(fd == -1)
	{
		printf("Unable to create open file\n");
		return -1;      //REturn to OS
	}
	else
	{
		printf("File succesfully opened with FD : %d\n",fd);
	}
	
	iRet = read(fd,Data,7);
	
	write(1,Data,iRet);        // 1 is monitor number
	close(fd);
	
	return 0;
}