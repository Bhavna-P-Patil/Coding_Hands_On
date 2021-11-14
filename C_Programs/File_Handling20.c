/////////Accept file from user and open the file and Display number of vowels ////////////

#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iCnt = 0, iRet = 0,i =0;
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
		for(i=0; i<iRet; i++)
		{
			if((Buffer[i] == 'a') || (Buffer[i] == 'e') || (Buffer[i] == 'i') || (Buffer[i] == 'o') || (Buffer[i] == 'u'))
			{
				iCnt++;
			}
		}
	}
	printf("Total vowels are : %d\n",iCnt);
	
	close(fd);
	return 0;
}











