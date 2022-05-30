#include<stdio.h>

#define lin 20
#define col 20

int main(){

    int m[lin][col], linha, coluna;

    scanf("%d %d", &linha, &coluna);

    for (int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++)
            scanf("%d", &m[i][j]);
    }

    for (int i=0; i<coluna; i++){
        for(int j=0; j<linha; j++)
            printf("%d ", m[j][i]);
        printf("\n");
    }


    return 0;
}