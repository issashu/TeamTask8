/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл*/

#include "library.h"

/* main calls function 1*/
int main(int argc, char **argv) {
    int a = atoi(argv[1]); 
    int b = atoi(argv[2]);
    int input = atoi(argv[3]);
    int result = 0;

	printFinalResult(a, b, result, input); /*function 1*/

    return 0;
}
/* function 1 calls function 2*/
void printFinalResult(int a, int b, int result, int input) {
    printf("%d", manipulateNumbers(a, b, result, input));
    
    return;
}
/* function 2 calls function 3*/
int manipulateNumbers(int a, int b, int result, int input) {
    a = addNumbers(a);
    b = addNumbers(b);
    
    /* printf("\nYour numbers are a = %d, b = %d\n\n", a, b);
    printf("1. For operation 'ADD' press 1.\n");
    printf("2. For operation 'SUBSTRACT' press 2.\n");
    printf("2. For operation 'MULTIPLICATION' press 3.\n");
    printf("2. For operation 'DIVISION' press 4.\n"); */

    switch(input) {
        case 1: 
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4: 
            result = a / b;
            break;
    }
    return result;
}
/* function 3*/
int addNumbers(int n){
    //printf("Input number is %d\n", n);
    return n;
}

