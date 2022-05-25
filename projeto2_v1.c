//o trabalho consistia em desenvolver um algotimo que ao receber dois fragmentos de uma especie desconhecida, dizer se eram iguais ou nao. 
//Entretanto, não importa a ordem das bases desse DNA mas sim a quantidade de cada base.
//Se o numero de repetições de cada base forem iguais então os fragmentos são iguais.

#include <stdio.h> /*importando biblioteca para prinf e scanf*/
#include <string.h> /*importando biblioteca para manipulação de strings*/

int main (){
    int n, a1, b1, c1, d1, e1, f1, a2, b2, c2, d2, e2, f2;
    char filamentoA[12], filamentoB[12]; /*criacao da cadeia de caracteres, strings com 12 espaços reservados incluindo /0*/

    scanf("%d", &n); /*lendo quantidade de pares de DNA que vão ser inseridos*/

    for(int i=0; i<n; i++){
        a1=0, b1=0, c1=0, d1=0, e1=0, f1=0, a2=0, b2=0, c2=0, d2=0, e2=0, f2=0;
        
        scanf("%s", filamentoA); /*lendo a string A*/
        scanf("%s", filamentoB); /*lendo a string B*/

       for (int j=0; j<=11; j++){ /*percorrendo o vetor de caracteres da string somente até a posição 11, pois o /0 não é relevante*/
            /* os codigos abaixo comparo cada posição com as letras e caso seja correspondente de alguma somo mais um e certa variavel*/
            if (filamentoA[j] == 'A') 
                a1++;

            if (filamentoA[j] == 'B')
                b1++;

            if (filamentoA[j] == 'C')
                c1++;

            if (filamentoA[j] == 'D')
                d1++;

            if (filamentoA[j] == 'E')
                e1++;

            if (filamentoA[j] == 'F')
                f1++;

            if (filamentoB[j] == 'A')
                a2++;

            if (filamentoB[j] == 'B')
                b2++;

            if (filamentoB[j] == 'C')
                c2++;

            if (filamentoB[j] == 'D')
                d2++;

            if (filamentoB[j] == 'E')
                e2++;

            if (filamentoB[j] == 'F')
                f2++;
        }

        /* aqui comparo o valor das variaveis, caso sejam iguais significa que a quantidade de cada letra no DNA é igual*/
        if(a1==a2 && b1==b2 && c1==c2 && d1==d2 && e1==e2 && f1==f2){
            printf("Caracteristicas Iguais\n");
        }else{
            printf("Caracteristicas Diferentes\n");
        }
        
    }

    return 0;
}
