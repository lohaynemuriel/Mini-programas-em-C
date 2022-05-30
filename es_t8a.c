#include<stdio.h>
#include<math.h>

int main(){
    typedef struct ponto{
        float x, y;
    } Ponto;

    Ponto primeiro, segundo;
    float dist=0.0;

    scanf("%f %f", &primeiro.x, &primeiro.y);
    scanf("%f %f", &segundo.x, &segundo.y);
    dist = sqrt(pow((segundo.y-primeiro.y), 2) + pow((segundo.x-primeiro.x), 2));
    if(dist<0.0000001){
        printf("os pontos sao iguais\n");
    }else{
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}