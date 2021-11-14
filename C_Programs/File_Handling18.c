/////////lseek program////////////
//  abcde fghij klmno pqrst u vwxyz
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	
	fd = open("LB17.txt",O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	//0  from starting position
	//1  from Current position
	//2  from end of the file
	
	lseek(fd,10,2);
	
	write(fd,"*",1);
	
	close(fd);
	
	return 0;
}











