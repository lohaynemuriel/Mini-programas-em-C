#include<stdio.h>
#include<math.h>

int main(){
    typedef struct retangulo{
        int x1, y1, x2, y2;
    }Retangulo;
    
    Retangulo primeiro, segundo;

    scanf("%d %d", &primeiro.x1, &primeiro.y1);
    scanf("%d %d", &primeiro.x2, &primeiro.y2);
    scanf("%d %d", &segundo.x1, &segundo.y1);
    scanf("%d %d", &segundo.x2, &segundo.y2);

    if((segundo.x1>=primeiro.x1 && segundo.y1>=primeiro.y1) && segundo.x2<=primeiro.x2 && segundo.y2<=primeiro.y2){
        printf("o segundo retangulo esta contido no primeiro\n");
    }else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    return 0;
}