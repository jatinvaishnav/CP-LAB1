#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,s,t,d;
  printf("enter the quantity\n");
   scanf("%d",&a);
  printf("enter the price per unit\n");
   scanf("%d",&b);
      s=a*b;
      d=s*20/100;
      t=s-d;
    if (s>1500)
    {
     printf("%d\n",t);
    }  
    else
    {
    printf("%d\n",s);
    }
  printf("total amount=%d\n",t);
return 0;
}
