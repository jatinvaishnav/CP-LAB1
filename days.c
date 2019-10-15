#include<stdio.h>
void main()
{
 int  total_days,year,months,weeks,days;
 int r1,r2,r3;
 printf("enter the value of total numbers of days\n");
  scanf("%d",&total_days); 
 year=total_days/365;
 r1=total_days%356;
 months=r1/30;
 r2=r1%7;
 weeks=r2/7;
 r3=r2%7;
 days=r3;
     printf("year=%d\n",year);
     printf("months=%d\n",months);
     printf("weeks=%d\n",weeks);
     printf("days=%d\n",days);
  
}
