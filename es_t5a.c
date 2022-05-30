/*Enunciado: Escreva	um	programa	que	leia	20	notas (valores	reais	entre	0	e	10),	armazene-as	
em	um	vetor	e	então	diga	se	uma	determinada	nota	x digitada	pelo	usuário	existe	no	vetor.	
O	 programa	 deve	 repetir	 o	 procedimento	 de	leitura	 de	x e	 busca	 de	x no	vetor	até	 que	 o	
usuário	digite	um	valor	negativo*/

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
