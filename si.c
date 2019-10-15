/* computing simple interest*/
 #include<stdio.h>
  void main()
    {
     float p,r,t,si;
     printf("enter the value of principle\n");
   scanf("%f",&p);
     printf("enter the value of time period in years\n");
   scanf("%f",&t);
     printf("enter the rate of interest\n");
   scanf("%f",&r);
       si=(p*t*r)/100;
     printf("Simple Interest=%f",si); 
    }
