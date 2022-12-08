#include<stdio.h>
int Add();

int Add()
{
    int a,b,c;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);

c=a+b;
return c;

}

int main(){
// int result;
// result=Add();



    printf("The value of a and b is %d",Add());
}