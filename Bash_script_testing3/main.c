/*
 Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко памет иска и заделя съответния блок памет. 
След това попитайте потребителя за нов размер и използвайте функция, която прави това.
*/

#include <stdio.h>
#include <stdlib.h>

int AllocateMemory (int *P, int uSize);
int ReallocateMemory(int *p, int NrRealloc);

int main(int argc, char **argv){
    //Variables go here:
    int NrElements = atoi(argv[1]);
    int NrRealloc = atoi(argv[2]);

    //Methods go here:
    int *Pointy = (int*) calloc(NrElements, sizeof(int));
    if (Pointy == NULL){
        printf("I am terribly sorry, Sir! Something went wrong. Have a jolly afternoon.\n");
        return 1;
    }
    else{
        printf("Array allocated at %p up to %p\n", Pointy, (Pointy+NrElements));
    }
    if (ReallocateMemory(Pointy, NrRealloc)) {
        
        return 1;
    }

    return 0;
}

int ReallocateMemory(int *p, int NrRealloc){
    int NewMax = NrRealloc;
    p = realloc(p, NewMax * sizeof(int));
    if (p == NULL){
        printf("I am terribly sorry, Sir! Something went wrong. Have a jolly afternoon.\n");
        return 1;
    }
    else{
        printf("Array reallocated at %p up to %p\n", p, (p+NewMax));
        return 0;
    }
}