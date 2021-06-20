#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char *argv1 = argv[1];
    char argv2 = *argv[2];
    char argv3 = *argv[3];

    char *p = argv1;
    int size = strlen(argv1);

    /*printf("The original string is: %s\n", argv1);*/

    for(int i = 0; i < size; i++) {
        if(*p == argv2){
            *p = argv3;
        }
        p++;
    }

    fprintf(stdout,"%s", argv1);

    return 0;
}
