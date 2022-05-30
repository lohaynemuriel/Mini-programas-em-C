/Enunciado: Faça um programa que teste se uma palavra é um palíndromo, ou seja, se ela 
pode ser lida da mesma forma tanto na ordem correta quanto na ordem invertida. Este 
programa não pode ser sensível a letras maiúsculas, ou seja, por exemplo, ele deve indicar 
que “Arara” é um palíndromo.]*/
    
#include<stdio.h>
#include <string.h>

#define t 21

int main(){

    char texto[t], texto3[t];
    int i,j=0;

    scanf("%s", texto);

    for(i=0; i<(strlen(texto)-1); i++){
        if(texto[i]>= 'A' && texto[i]<='Z')
            texto[i]+=32;
    }
    //deixa todo o texto em minusculo
    
    for(i=(strlen(texto)-1); i>=0; i--){
        texto3[j] = texto[i];
        j+=1;
    }
    
    //outra string armazena a primeira string porém ela inversa
    
    if(strncmp(texto, texto3, (strlen(texto)-1))==0)
        printf("Esta palavra e um palindromo\n");
    else
        printf("Esta palavra nao e um palindromo\n");
    
    //compara se a inversa é igual a original, se é um palindromo
    return 0;
}
