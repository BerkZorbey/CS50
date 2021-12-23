#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("1-8 arası bir yükseklik giriniz:\n");
    
    
        if(h>0 && h<9){
        for(int i=0;i<h;i++){
            for(int k=h-i;k>1;k--){
                printf(" ");
            }
            for(int j=0;j<i+1;j++){
                   printf("#");
                   
            }
          printf("\n");  
        }
        
        }
       
    
}
