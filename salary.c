#include<stdio.h>
#include<math.h>
int main()
{
 float d1,ts,m1,y1,d,y,m,s,t;
  printf("current salary\n");
  scanf("%f",&s);
 printf("enter today's date,month,year\n");
 scanf("%f%f%f",&d,&m,&y);
 printf("enter joining date,month,year\n");
  scanf("%f%f%f",&d1,&m1,&y1);
   t=(abs(d-d1)/365)+(abs(m-m1)/30)+(abs(y-y1)/1);
    if (t>3)
     {
       ts=300+s;
     }
    else
     { 
      ts=s ;
     } 
   printf("total salary =%f\n",ts);
 return 0;
}
