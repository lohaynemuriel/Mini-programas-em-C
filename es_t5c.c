#include <stdio.h>

int main(){
    int vetorA[10], vetorB[10], i;

    for(i=0; i<10; i++){
        scanf("%d", &vetorA[i]);
    }

    for(i=0; i<10; i++){
        scanf("%d", &vetorB[i]);
    }

    for(i=0; i<10; i++){
        printf("%d|%d|", vetorA[i], vetorB[i]);
    }
    printf("\n");
    return 0;
}