#include<stdio.h>
int main()
{
 int a;
 char g,m,ms,f,y,n;
 printf("enter age\n");
 scanf("%d",&a);
 printf("enter gender: m or f and merital status y or n\n");
 scanf("%c %c",&g,&ms); 
 printf("age,gender,merital status:=%d %c %c\n",a,g,ms);
   if (ms=='y')
      {
       printf("insured\n");
      }
   else if (a>30 && g=='m')
      {
       printf("insured\n"); 
      }
   else if (a>25 && g=='f')
      {
       printf("insured\n");
      }
   else
      {
       printf("not insured\n");
      }
 return 0;
}
