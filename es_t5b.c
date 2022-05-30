#include <stdio.h>

int main(){
    int i, vendas[10], produtosVendidos=0;
    float precos[10], faturamento=0.0;
    for(i=0; i<10;i++){
        scanf("%d", &vendas[i]);
        produtosVendidos += vendas[i];
    }

    for(i=0; i<10;i++){
        scanf("%f", &precos[i]);
        faturamento+= (vendas[i]*precos[i]);
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", faturamento, produtosVendidos);

    return 0;
}