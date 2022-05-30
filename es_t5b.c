/*Enunciado: Uma	 determinada	 loja	 comercializa	 10	 produtos	 diferentes.	 Escreva	 um	
programa	 que	 receba	 a	 quantidade	 vendida	 e	 o	 valor	 unitário	 de	 cada	 produto	 e	 os	
armazene	 em	 dois	 vetores.	 Após	 a	 leitura,	 o	 programa	 deve	 calcular	 o	 total	 de	 produtos	
vendidos, o	faturamento	total	da	loja e	exibi-los	na	tela.*/

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
