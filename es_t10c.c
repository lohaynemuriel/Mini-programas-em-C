/*Enunciado: Crie uma estrutura para armazenar os seguintes dados de um aluno: nome (string com 
100 caracteres), ra (número inteiro), nota P1 e nota P2 (valores em ponto flutuante). Em seguida, 
crie um programa que leia os dados de n alunos (n dado pelo usuário) e os armazene em um vetor 
alocado dinamicamente. Por fim, seu programa deve percorrer o vetor armazenado e apresentar a 
média de cada aluno, sendo uma por linha, no formato “RA Nome Média” (valores separados por um 
‘\t’). A média deve ser apresentada com duas casas decimais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(float* nota1, float* nota2);
typedef struct Pessoa{
    int ra;
    char nome[102];
    float p1,p2;
}Pessoa;

int main(){
    int qtd, i;
    
    scanf("%d", &qtd);
    getchar();

    Pessoa* vet = (Pessoa*) malloc(qtd*sizeof(Pessoa));
    
    for(i=0; i<qtd; i++){
        fgets(vet[i].nome, 102, stdin);
        scanf("%d", &vet[i].ra);
        scanf("%f", &vet[i].p1);
        scanf("%f", &vet[i].p2);
        getchar();
    }   
    
    for(i=0; i<qtd; i++){
        printf("%d\t", vet[i].ra);
        for(int j=0; j<strlen(vet[i].nome)-1; j++){
            printf("%c", vet[i].nome[j]);}
        printf("\t%.2f\n", media(&vet[i].p1, &vet[i].p2));
    }
    return 0;
}

float media(float* nota1, float* nota2){
    return (*nota1+*nota2)/2;
}

