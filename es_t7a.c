#include <stdio.h>
#include <string.h>

int main(){
    char texto[81];
    int i=0;

    fgets(texto, 81, stdin);
    
    for(i = (strlen(texto)-2); i>=0; i--){
            printf("%c", texto[i]);
    }
    
    printf("\n");

    return 0;
}