/* class project E.M.I calculator*/
#include<stdio.h>
#include<math.h>
void main()
{
 float p,r,t,R,T,emi; 
  printf("jatin's calculator\n");
   printf("let's get started\n");
    printf("enter the value of the principle ammount(in rupees)\n");
   scanf("%f",&p);
      printf("\n");
      printf("enter the value of time(in years)\n");
   scanf("%f",&T);
        printf("\n");
         printf("enter the value of rate of interest per year,in percentage\n");
   scanf("%f",&R);
                        r=R/(100*12);
                        t=T*12;
           emi=p*r*pow(1+r,t)/(pow(1+r,t)-1);
      printf("\n"); 
      printf("the value of emi is=%f\n",emi);
        printf("\n");
    printf("thank you for using jatin's emi calculator, we're glad to help you all.....come again\n");
} 
