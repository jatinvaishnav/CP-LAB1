#include<stdio.h>
#include<math.h>
void main()
{
 float a,b,c,s,area;
  printf("enter the value of side a\n");
   scanf("%f",&a);
  printf("enter the value of side b\n");
   scanf("%f",&b);
  printf(" enter the value of side c\n");
   scanf("%f",&c);
     s=(a+b+c)/2;
     area= sqrt(s*(s-a)*(s-b)*(s-c));
  printf("the area of the required triangle is=%f",area);
}
