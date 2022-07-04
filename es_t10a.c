/*Enunciado: Implemente um programa que faça a avaliação de polinômios de um grau qualquer. 
Este programa deve:
1. Ler o grau do polinômio (número inteiro);
2. Ler os coeficientes do polinômio (pontos flutuantes, fornecidos do menor para o maior grau)
e armazená-los em um vetor dinamicamente alocado, de tamanho adequado ao grau do 
polinômio.
3. Ler o valor de 𝑥 (ponto flutuante) e retornar o valor resultante.

Parte 2: calcular o valor derivando*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void polinomio(int* g, float* c, float* x);
void derivada(int* g, float* c, float* x);
float conta;

int main(){
    int grau, i;
    float x;

    scanf("%d", &grau);
    
    float* coeficientes = (float *) malloc (grau++ * sizeof(float));
    
    if(coeficientes == NULL)
        return 1;
        
    for(i=0; i<grau; i++)
        scanf("%f", &coeficientes[i]);
        
    scanf("%f", &x);
    polinomio(&grau, coeficientes, &x);
    derivada(&grau, coeficientes, &x);
    return 0;
}

void polinomio(int* g, float* c, float* x){
    conta=0.00;
    for(int i=0; i<*g; i++){
        conta += c[i]*pow(*x,i);
    }
    printf("Resultado do polinomio = %.2f\n", conta);
}

void derivada (int* g, float* c, float* x){
    conta=0.00;
    for(int i=0; i<*g; i++){
        conta += (i*c[i])*pow(*x,i-1);
    }
    
    printf("Resultado com derivacao = %.2f\n", conta);
}

