//o trabalho consistia em desenvolver um algotimo que ao receber dois fragmentos de uma especie desconhecida, dizer se eram iguais ou nao. 
//Entretanto, não importa a ordem das bases desse DNA mas sim a quantidade de cada base.
//Se o numero de repetições de cada base forem iguais então os fragmentos são iguais.

#include <stdio.h>
#include <string.h>

int main (){
    int n, y;
    char filamentoA[12], filamentoB[12], x= 'A';

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        y=0;
        
        scanf("%s", filamentoA);
        scanf("%s", filamentoB);

       for (int j=0; j<=11; j++){
            
           for (x = 'A'; x <= 'F'; x++){
            
            if (filamentoA[j] == x || filamentoB[j] == x){
                y++;
            }

            if (filamentoA[j] == x && filamentoB[j] == x){
                    y = y + 2;
                }
        }
       }
        if(y%2 == 0){
            printf("Caracteristicas Iguais\n");
        }else{
            printf("Caracteristicas Diferentes\n");
        }
    }

    return 0;
}
