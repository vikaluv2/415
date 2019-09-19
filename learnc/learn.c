#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //the white space
    
    char str[]= "-this stuff";
    char * space; //pointer for space
    printf("Enter a command =" , stdin);
    space = strtok (stdin, " ,.-");
    char buffer[1000]; //declare stack array
    gets(buffer);
    printf("result = %s\n", buffer);
    
    while(space != NULL){
        printf("%s\n", space);
        space = strtok (NULL, " ,.-");
    }
   return 0;
}