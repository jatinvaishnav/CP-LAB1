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
    printf("total marks out of 500 are:=%f\n",sum);
   avg=sum/5;
    printf("the average score is=%f\n",avg);
 }                                                                                                 
