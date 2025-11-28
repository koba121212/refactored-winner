
#include <stdio.h>


#include <string.h>

int main() {
    
    // declaring and initializing a string
    char st[] = "Gkax";
    int i ;
    

    // printing the string
    printf("The string %s is %lu\n" , st,strlen(st));
    
    for (i=0;i<=strlen(st);i++)
        printf("%d\n",i);
    
    return 0;

