/////////Accept file from user and open the file and Display count of bytes ////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname[20];
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	iRet = lseek(fd,0,2);
	
	printf("File size is : %d\n",iRet);
	
	close(fd);
	return 0;
}











