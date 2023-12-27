#include <stdio.h>

int main()
{
	printf("Current File :%s\n", __FILE__); //this shows the location of file.
	printf("Current Date :%s\n", __DATE__);// this helps to show the date of compilation of program.
	printf("Current Time :%s\n", __TIME__);// this shows the time of compilation .
	printf("Line Number :%d\n", __LINE__); // this shows no of line code in c program.
	return 0;
}
