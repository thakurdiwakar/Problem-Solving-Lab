#include<stdio.h>
#include<string.h>
#define size 100
void output(char name[size],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%c",name[i]);
	}
}
void reverse(char name[size],char l)
{
	char name1[l];
	int i,c=0;
	for(i=l-1;i>=0;i--)
	{
	    name1[c++]=name[i];
	}
	output(name1,l);
	if(strcmp(name,name1)==0)
	{
		printf("\nPalindrome String");
	}
}
int main()
{
	int s,l;
	char name[size];
	printf("enter a string:");
	gets(name);
	l=strlen(name);
	printf("reversed string are:");
	reverse(name,l);
}
