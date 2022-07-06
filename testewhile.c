#include <stdio.h>
#include <windows.h>
 

int main()
{
	int i,a=1000;
	while(1)
	{
		i++;
		printf("%d",i);
		Sleep(a);
		system("cls");
	}
	return(0);
}
