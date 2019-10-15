//*id and pass using switch*//
#include<stdio.h>
int main()
{
 int id,pw;
 printf("enter your user id\n"); 
 scanf("%d",&id);
   switch(id)
       {
        case 12345:
               scanf("%d",&pw);
               switch(pw)
                      {
                        case 123:
                                 printf("welcome boss\n");
                                 break;
                        default:
                                 printf("wrong password DUDE!!!!\n");        
                      }
        break;

       default:
               printf("not a valid user\n");          
       }

 return 0;
}
