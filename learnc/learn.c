#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    /*for(int i = 0; i < argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }*/
    //the white space
    char * space; //pointer for space
    printf("Enter a command =" , stdin);
    space = strtok (stdin, " ,.-");
    char buffer[1000]; //declare stack array
    gets(buffer);
    printf("result = %s\n",space, buffer);
    //printf("*buffer = %c\n", *buffer);
    
}