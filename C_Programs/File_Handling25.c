/////////Accept file from user and open the file and Display count of bytes ////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iSum = 0, iRet = 0,i =0;
	char Fname[20];
	char Buffer[10];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,10)) != 0)
	{
		iSum += iRet;
	}
	printf("File size is : %d\n",iSum);
	
	close(fd);
	return 0;
}











