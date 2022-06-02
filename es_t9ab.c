/*Enunciado:	 Escreva	 uma	 função	 chamada	 “media” que	 receba	 duas	 notas	 (float)	 e	 um	
caractere.	Caso	este	caractere	seja		'A',	a	função	deve	retornar	a	média	aritmética das	duas	
notas.	Caso	seja	'B',	a	média	geométrica (raiz	quadrada	do	produto	das	duas	notas)	deve	ser	
retornada.	Escreva	também	um	programa	que	leia	os	valores	das	duas	notas	e	do	caractere,	
chame	a	 função	média	e	imprima	o	 resultado	na	 tela.	A	função	“media” deve	ser	definida	
após a	função	main()*/

#include<stdio.h>
#include<math.h>

float media(char t, float n1, float n2);

int main(){
    float nota1, nota2;
    char tipo;

    scanf("%c", &tipo);
    scanf("%f" "%f", &nota1, &nota2);
    printf("%.3f\n", media(tipo, nota1, nota2));

    return 0;
}

float media(char t, float n1, float n2){
    if(t=='A')
        return ((n1+n2)/2);
    else
        return (sqrt(n1*n2));
}
