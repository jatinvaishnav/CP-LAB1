//*perform arithimitic operations*//
#include<stdio.h>
int main()
{
 char i;
 int a,b,c,d,e,f;
 printf("enter the value of a and b\n");
  scanf("%d%d",&a,&b);
   c=a+c;
   d=a-b;
   e=a*b;
   f=a/b; 
 printf("okay guys here m=multiply s=subtraction d=divide a=addition\n");
  scanf(" %c",&i);
    switch (i)
          {
            case 'm':
                     printf("%d\n",e);
                     break;
            case 'd':
                     printf("%d\n",f);
                     break;
            case 'a':
                     printf("%d\n",c);
                     break;
            case 's':
                     printf("%d\n",d);
                     break;
          } 
return 0;
}
