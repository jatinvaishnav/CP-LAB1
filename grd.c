#include<stdio.h>
void main()
{
 float mathematics,english,physics,programing,electrical,sum,avg;
 char h;
 printf("marks out of 100....ready? yes or no?\n");
 printf("write y for yes to continue\n");
  scanf("%c",&h);
 printf("mathematics:\n");
  scanf("%f",&mathematics);
 printf("english:\n");
  scanf("%f",&english);
 printf("physics:\n");
  scanf("%f",&physics);
 printf("programing:\n");
  scanf("%f",&programing);
 printf("electrical:\n");
  scanf("%f",&electrical);

   sum=mathematics+english+physics+programing+electrical;  
   avg=sum/5; 
printf("avg=%f \n",avg);
   if (avg>=90)
    {
      printf("grade:S\n");
    }
   else if (avg>=80 && avg<90)
    {
      printf("grade:A\n");
    }   
   else if (avg>=70 && avg<80)
    {
      printf("grade:B\n");
    }
   else if (avg>=60 && avg<70)
    {
      printf("grade:C\n");
    }
   else if (avg<60)
    {
      printf("fail\n");
    }
 }                                                                                                 
