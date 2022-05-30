/*Enunciado:	 Escreva	 um	 programa	 que	 (i)	 defina	 uma	 estrutura	 chamada	 “Ponto”,	 que	
deverá	conter	as	coordenadas	x	e	y	de	um	ponto	qualquer	no	espaço	bidimensional (valores	
reais),	(ii)	leia	as	coordenadas	de	dois	pontos	quaisquer	do	 teclado,	(iii)	calcule	a	distância	
euclidiana	entre	eles	e	(iv)	diga	se	os	dois	pontos	são	iguais.	Como	você	estará	trabalhando	
com pontos	flutuantes,	não	busque igualdades exatas:	considere	que	dois	pontos	são	iguais	
se	a	distância	euclidiana	entre	eles	for	inferior	a	0,0000001.*/
    
#include<stdio.h>
#include<math.h>

int main(){
    typedef struct ponto{
        float x, y;
    } Ponto;

    Ponto primeiro, segundo;
    float dist=0.0;

    scanf("%f %f", &primeiro.x, &primeiro.y);
    scanf("%f %f", &segundo.x, &segundo.y);
    dist = sqrt(pow((segundo.y-primeiro.y), 2) + pow((segundo.x-primeiro.x), 2));
    if(dist<0.0000001){
        printf("os pontos sao iguais\n");
    }else{
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}
