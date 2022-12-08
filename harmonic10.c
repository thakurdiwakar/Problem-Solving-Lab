#include<stdio.h>
int main()
{
      int n,i;
      float s;
      printf("1+1/2+1/3+1/4+..+1/N.");
      printf("\n\nEnter Value of N : ");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      
      {
            s=s+(1/(float)i);

            /* For printing the series */
            if(i==1)
                  printf("\n1 +");
            else if(i==n)
                  printf("(1/%d)  ",i);
            else
                  printf(" (1/%d) + ",i);
      }
      printf("\n\nSum of Series = %.2f",s);
      return 0;        
}