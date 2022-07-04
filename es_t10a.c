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

