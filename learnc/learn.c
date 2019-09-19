#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*for(int i = 0; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }*/
    
    char buffer[1000]; //declare stack array
    buffer[0] = 'a';
    printf("Buffer[0] = %c\n", buffer[0]);
    printf("*buffer = %c\n", *buffer);
    
}