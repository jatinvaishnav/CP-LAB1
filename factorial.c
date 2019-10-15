#include<stdio.h>
int main()
{
int i=1,n,m=1;
 printf("enter the value of n\n");
  scanf("%d",&n);
    while(i<=n)
        {
          m=m*i;
          i++;
        }
    printf("factorial is=%d",m);
 return 0;
}
