#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    
    //printf("Hello World\n");
    
    /*int i = 10;
    printf("I=%d\n", i);
    int * p; 
    p= &i; //points p to i
    *p = *p + 1;
    printf("i = %d\n", i); */
    
    /*int *p = malloc(4);
    *p = 10;
    printf("p = %p : *p = %d\n", p, *p);
    free(p); */ //prints: p = 0x55d72aff1670 : *p = 10
    
    for(int i = 0; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }
    
    //declare stack array
    char buffer[1000];
    buffer[0] = 'a';
    printf("Buffer[0] = %c\n", buffer[0]);
    
}