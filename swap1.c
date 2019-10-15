#include<stdio.h>
 void main()
  {
    int a,b,temp;
    printf("enter the value of a and b\n");
    
    scanf("%d%d",&a,&b);

    printf("before swapping");

    printf("a=%d b=%d\n",a,b);
     temp=b;
     b=a;
     a=temp;
    printf("after swapping\n");
    
    printf("a=%d b=%d\n",a,b);

  }
