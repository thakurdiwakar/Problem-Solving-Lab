#include <stdio.h>
#include <conio.h>
#include <math.h.>
int octal(int d)
{
	int i=0,b=0;
	while(d!=0)
	{
		int r=d%2;
		b=b+r*pow(10,i);
		d=d/2;i++;
	}
	return b;
}
void main()
{
	int n;
	printf("enter a decimal number:");
	scanf("%d",&n);
	int oct=octal(n);
	printf("BINARY equivalent:%d\n",oct);
}
