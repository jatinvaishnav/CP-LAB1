#include<stdio.h>

int main()
{
int n, num, a, b, c, d, r1, r2, r3, r4,r5,e;
printf("Enter any five digit number: ") ;
scanf("%d",&n) ;
a = n/10 ;    
r1 = n % 10 ;
b = a/10 ;    
r2 = a % 10 ;
c = b/10 ;     
r3 = b % 10 ;
d = c/10 ;    
r4 = c %  10;
e= d/10;
r5=d%10;
num=((r5+1)*10000)+((r4+1)*1000)+((r3+1)*100)+((r2+1)*10)+((r1+1)*1);
printf("the number is:%d",num);
return 0;
}

