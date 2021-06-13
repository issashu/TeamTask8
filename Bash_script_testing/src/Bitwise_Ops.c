#include "Bitwise_Ops.h"


int main(int argc, char **argv) {
    int number = atoi(argv[1]);
    int position = atoi(argv[2]);
    int swapMask = 1;

    while (position > 8) {
        printf("Please enter an index for bit operations for 8bit number (1-8) or ctrl+C to quit:\n");
        scanf("%d", &position);
    }
    
    validateNumber(number);
    validateNumber(position);
    swapMask = (1 << position) - 1;
    printf("All bits after position %d were removed and result is: %d\n", position, (number &= swapMask));
    
    return 0;
}

void validateNumber (int number) {
    if(number < 0 || (isdigit(number) != 0)){
        printf("Supplied arguments must have a positive attitude AND must still be a number ^^\n");
        exit(EINVAL);
    }
}