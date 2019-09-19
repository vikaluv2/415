#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    /*for(int i = 0; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }*/
    
    //printf("Enter a command =");
    char buffer[1000]; //declare stack array
    fgets(buffer, 1000, stdin);
    printf("result = %s\n", buffer);
    //printf("*buffer = %c\n", *buffer);
    
}