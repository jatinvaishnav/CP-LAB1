//*switch to days*//
#include<stdio.h>
int main()
{
char i;
printf("m=monday t=tuesday w=wednesday y=thursday f=friday s=saturday d=sunday\n");
scanf("%c",&i);
 switch(i)
   {
    case 'm':
             printf("damn!it's monday\n");
             break;
    case 't':
             printf("it's tuesday\n");
             break;
    case 'w':
             printf("cool it's wednesday\n");
             break;
    case 'y':
             printf("great.it's thursday\n");
             break;
    case 'f':
             printf("come on,it's friday\n");
             break;
    case 's':
             printf("finally saturday is here\n");
             break;
    case 'd':
             printf("yayyyyyy!!!it's SUNDAY....FUNDAYYYY\n");
             break;
   }
 return 0;
}
