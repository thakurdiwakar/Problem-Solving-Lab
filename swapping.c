#include<stdio.h>
int main()

{

int a,b,temp;

printf("Enter the value of a and b :\n ");

scanf("%d %d",&a,&b);

temp=a;
a=b;
b=temp;
printf("After swapping the value of a and b are\n ");
printf("The value of a is : %d \n",a);
printf("The value of b is : %d \n",b);


return 0;

}