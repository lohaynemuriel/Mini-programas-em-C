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