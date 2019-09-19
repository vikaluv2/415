#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    /*for(int i = 0; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }*/
    
    printf("Enter a command =" , stdin);
    char buffer[1000]; //declare stack array
    gets(buffer);
    printf("result = %s\n", buffer);
    //printf("*buffer = %c\n", *buffer);
    
}