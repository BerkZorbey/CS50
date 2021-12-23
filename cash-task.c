#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void){
      float dolar=get_float("Para Miktarı Giriniz: ");
    while(dolar<0){
         dolar=get_float("Lütfen doğru bir tutar giriniz: ");
 }
    int cent=round(dolar*100);
      int sayac=0;
       int i=0;
       int quarter=25;
       int dime=10;
       int nickel=5;
       int penny=1;
      while(i<cent){
          if(cent>=quarter){
              cent-=quarter;
              sayac++;
               
          }
          else if(cent>=dime){
              cent-=dime;
              sayac++;
              
          }
          else if(cent>=nickel){
              cent-=nickel;
              sayac++;
             
          }
          else if(cent>=penny){
              cent-=penny;
              sayac++;
              
          }

      }
      printf("%i\n",sayac);




}
