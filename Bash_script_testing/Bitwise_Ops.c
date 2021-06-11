#include <stdio.h>
#include <stdbool.h>


int main()
{
unsigned int Number = 0;
int Position = 0;
int SwapMask = 1;

printf("Please enter a number:\n");
scanf("%d", &Number);

printf("Please enter an index for bit operations:\n");
scanf("%d", &Position);

while (Position>8) {
    printf("Please enter an index for bit operations for 8bit number (1-8):\n");
    scanf("%d", &Position);
}

SwapMask = (1<<Position)-1;

printf("All bits after position %d were removed: %d", Position, (Number &= SwapMask));
}