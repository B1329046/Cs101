#include <stdio.h>


int main() {
    for (int i = 1 ; i <= 9*9 ; i++){
        int row = (i - 1)/ 9 + 1;
        int col = (i - 1)% 9 + 1;
        
        printf("%d * %d = %d\n" , row , col , row * col);
        
        if (col ==9){
            printf("\n");
        }
    
    }
    return 0;
