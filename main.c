#include <stdio.h>

int main(void){
    int a,b;
    a = 3;
    b = 5; 

    int res = a & b;
printf("%d\n", res);
    
    res = a | b;
printf("%d\n", res);
    
    res = a ^ b;
printf("%d\n", res);

return 0;

}