#include <stdio.h>

int main() {
    int n = 7;
    int idx = 7;
    int number = 0;

    for ( int i = 1 ; i <= n ; i++){
        number = 0;
        for(int k = 0 ; k<= n*2 ; k++){
           if((k == idx)||(k == idx+ number*2)){
               printf("%d" , i);
               number ++;
               if (number == i){
                    break;
               }
             
           }
           
           else{
               printf(" ");
           }
        }   
        
        printf("\n");
        idx -- ;
    }

    

    return 0;
}

    
