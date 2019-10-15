//*si for 3 times*//
#include<stdio.h>
int main()
{
int i=1,si,p,t,r;
 printf("enter the value of p,t,r\n");
 scanf("%d%d%d",&p,&t,&r);
   si=(p*t*r)/100;
   while(i<=3)
      {
       printf("%d",si);
       i++;
      }
 return 0;
}
