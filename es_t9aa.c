#include<stdio.h>
#include<math.h>

float volume_esfera(float r){
    return (4*3.14159*r*r*r)/3;
}

int main(){
    float raio;

    scanf("%f", &raio);
    printf("%.2f\n", volume_esfera(raio));
    return 0;
}