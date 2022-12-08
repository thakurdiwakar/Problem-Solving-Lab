#include<stdio.h>
int Add(int,int);

int Add(int a,int b)
{

   
   printf("The result of a and b is %d",a+b);
}


int main()
{
    int a,b;
    printf("Enter two numbers :");
   scanf("%d%d",&a,&b);
    
    Add(a, b);
   
}
