#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //the white space
    char * space; //pointer for space
    printf("Enter a command =" , stdin);
    space = strtok (stdin, " ,.-");
    char buffer[1000]; //declare stack array
    gets(buffer);
    printf("result = %s\n", space);
    
   return 0;
    
}