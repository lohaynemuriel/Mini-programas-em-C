/*Enunciado: Implemente um programa que leia o número de linhas e colunas de uma matriz, 
seguidos dos valores desta matriz (inteiros), e indique se a matriz é simétrica ou não. Os dados da 
matriz serão fornecidos linha à linha, ou seja, primeiro será preenchida a primeira linha, depois a 
segunda e assim por diante. Seu programa deve usar alocação dinâmica para armazenar a matriz.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n, i,j, aux=0;
    
    scanf("%d", &m);
    scanf("%d", &n);
    
    int** mat = (int**) malloc(m*sizeof(int*));

    for(i=0; i<m; i++){
        mat[i] = (int*) malloc(n*sizeof(int));
    }
    
    if(mat == NULL)
        return 1;
        
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);}
    }

    if(m==n){
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(mat[i][j]==mat[j][i]){
                    aux++;}}}
    }
    
    if(aux != (m*n)){
        printf("Nao eh simetrica\n");}
    else{
        printf("Eh simetrica\n");}
        
    for (i=0; i<m; i++)
        free(mat[i]);
    
    free(mat);

    return 0;
}
