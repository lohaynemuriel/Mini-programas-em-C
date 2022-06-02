#include<stdio.h>
#include<math.h>

float media(char t, float n1, float n2);

int main(){
    float nota1, nota2;
    char tipo;

    scanf("%c", &tipo);
    scanf("%f" "%f", &nota1, &nota2);
    printf("%.3f\n", media(tipo, nota1, nota2));

    return 0;
}

float media(char t, float n1, float n2){
    if(t=='A')
        return ((n1+n2)/2);
    else
        return (sqrt(n1*n2));
}