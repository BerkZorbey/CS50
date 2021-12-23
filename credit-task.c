#include <cs50.h>
#include <stdio.h>

int main(void){
     long num= get_long("Credit Number: ");
     long lastdigit,lastdigit_2,greaterten,dif,result;
     long multiply2=1;
     long sum=0;
     long cred=num;
      while(num>0){
          lastdigit=num%10;
          sum+=lastdigit;
           num /=10;
           lastdigit_2=num%10;
           num /=10;
           multiply2=lastdigit_2*2;
           if(multiply2>9){
             greaterten=multiply2%10;
             multiply2=multiply2/10;
             dif=multiply2%10;
             
             sum+=greaterten+dif;   
           }
           else{
           sum+=multiply2;
           }
      }
    while(cred>100){
        cred=cred/10;
    }
    result=sum%10;
   if(result==0){
       switch(cred){
           case 34:
           case 37:
           printf("AMEX\n");
           break;
           case 51:
           case 52:
           case 53:
           case 54:
           case 55:
           printf("MASTERCARD\n");
           break;
           case 40:
           case 41:
           case 42:
           case 43:
           case 44:
           case 45:
           case 46:
           case 47:
           case 48:
           case 49:
           printf("VISA\n");
           break;
           default:
           printf("INVALID\n");
           break;
           

       }
   }
   else{
       printf("INVALID\n");
   }
     
     
     


}
