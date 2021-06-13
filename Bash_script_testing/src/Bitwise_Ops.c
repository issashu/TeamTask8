#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <ctype.h>

int validateNumber (int number) {
    if(number<0 || !isdigit(number)){
        printf("Supplied arguments must have a positive attitude AND must still be a number ^^\n");
        exit(EINVAL);
    }

    return 0;
}

int main(int argc, char **argv) {
    printf("%s %s %s\n", argv[0], argv[1], argv[2]);
    int Number = *argv[1];
    int Position = *argv[2];
    int SwapMask = 1;

    while (Position > 8) {
        printf("Please enter an index for bit operations for 8bit number (1-8) or ctrl+C to quit:\n");
        scanf("%d", &Position);
    }
        validateNumber(Number);
        validateNumber(Position);
        SwapMask = (1<<Position)-1;
        printf("All bits after position %d were removed: %d", Position, (Number &= SwapMask));
    
    return 0;
}