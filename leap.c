#include<stdio.h>
#include<math.h>
void main()
{
 int a;
  printf("enter the value of the year(e.g 2014,1998 etc)\n");
   scanf("%d",&a);
    if (a%4!=0)
      {
       printf("the given year is not a leap year\n");
       }
       else  
      {
       printf("the given year is a leap year\n");
       }
}

