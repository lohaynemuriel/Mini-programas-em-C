#include <stdio.h>

int main (){
    float notas[20], buscador;
    int i, sinalizador;

    for (i=0; i<20; i++){
        scanf("%f", &notas[i]);
    }

    scanf("%f", &buscador);

    while(buscador>=0.0){
        
        sinalizador=0;
    
        for (i=0; i<20; i++){
            if(notas[i] == buscador){
                printf("existe\n");
                sinalizador=1;
                break;
            }

        }
        
        if(sinalizador == 0){
            printf("nao existe\n");
        }

        scanf("%f", &buscador);
        
    }

    return 0;
}