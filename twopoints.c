/* distance between two points*/
#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,d;
 printf("distance between two given points in a cartesian plane\n");
 printf("enter the coordinate of the first point\n");
 scanf("%f%f",&x1,&y1);
 printf("enter the coordinates of the second point\n");
 scanf("%f%f",&x2,&y2);
 d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 printf("the distance between these two points is=%fsq units\n",d);
 printf("KHATAMM!!!!\n");
}
