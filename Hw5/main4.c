#include <stdio.h>


int main() {
    int i = 12345;
    int result, thousands, units, remaining;
    thousands = (i /1000)%10;
    units = i%10;
    remaining = i - thousands*1000 - units;
    result = remaining + units*1000 + thousands;
    
    printf("原數 : %d\n" , i);
    printf("調換後的結果: %d\n" , result);
    return 0;
}
