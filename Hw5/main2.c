#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;
    double term = 0.0;
    int x = 0;
    int sign = 1;
    while(1) {
        term = 4.0 / (2 * x + 1);
        pi += sign * term;
        sign = -sign;
        if(fabs(pi - 3.14159)<0.000005){
            break;
        }
        x++;
    }
    printf("Calculated PI = %.5f\n", pi);
    printf("Number of terms = %d\n", x+1);
    
    return 0;
}
