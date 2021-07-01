/*Задача 12.
Напишете макро GENERIC_MAX(type),което трябва да се експандне до следната функция: int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

#include<stdio.h>
#include<stdlib.h>

#define GENERIC_MAX(type) type type##_max(type x, type y){return x > y ? x : y;}
                            
GENERIC_MAX(int);

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Not enough arguments");
        return 1;
    }



    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
   
    int result = int_max(x,y);
    printf("%d\n", result);
    
    return 0;
}