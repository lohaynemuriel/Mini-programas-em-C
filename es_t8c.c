/*Enunciado:	 Escreva	 um	 programa	 que	 contenha	 uma	 estrutura	 chamada	 “corpo”,	 com	 os	
campos	altura (tipo	float),	peso (tipo	float)	e	nome (tipo	string).	Este	programa	deve	ler	os	
dados	 de	 um	 usuário (altura,	 peso	 e	 nome),	 armazená-los	 em	 uma	 variável	 da	 estrutura	
corpo	e,	em	seguida,	acessar	estes	valores	armazenados,	calcular	o	IMC	(divisão	entre	peso	e	
o	quadrado	da	altura)	e	exibir	o	resultado	na	tela.*/
    
#include<stdio.h>
#include<math.h>

int main(){
    typedef struct Corpo{
        float altura, peso, imc;
        char nome[20];
    }Corpo;

    Corpo pessoa;

    scanf("%f", &pessoa.altura);
    scanf("%f", &pessoa.peso);
    scanf("%s", pessoa.nome);

    pessoa.imc=pessoa.peso/pow(pessoa.altura,2);
    printf("%.3f\n", pessoa.imc);

    return 0;
}
