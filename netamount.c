#include <stdio.h>
int main()
{
	int pa;
	int d;
	int na;
	printf("enter the purchased amount:");
	scanf("%d",&pa);
	if(pa<100)
	na=pa;
	else
	na=pa-10;
	printf("net amount:%d",na);
}
