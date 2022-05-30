#include<stdio.h>

int main (){
    int n, inicio, partida, destino, i, j, k=0, h;
    int d = 0, distanciatotal = 0, x = 1; 
    
    scanf("%d", &n); //lendo tamanho da matriz

    int vertices[n][n], cidadesvisitadas[n]; //criando a matriz adjacente e o vetor que armazenara as cidades ja visistadas

    for(i=0; i<n; i++){             //lendo a matriz adjacente
        for(j=0; j<n; j++){
            scanf("%d", &vertices[i][j]);
        }
    }

    scanf("%d", &partida);  //lendo cidade de partida
    inicio = partida;      //atribuindo partida a outra variavel para utilizar no final
    scanf("%d", &destino);//lendo o destino

    for(i=0; i<n; i++){     //completando o vetor com o valor 10, para nao armazenar valor lixo
        cidadesvisitadas[i] = 10;
    }

    j=0;
    
    while(j<n){ //j vai de 0 a n, para verificar se no vetor ja tem a cidade que queremos ir
        if(j==0){ //quando j=0, e a primeira posicao do vetor, desta forma, a cidade de onde partimos
            cidadesvisitadas[0] = partida; 
        }

        if(cidadesvisitadas[j] != destino){ //verfica se a posicao que estou do vetor nao e destino, ou seja, se ja cheguei no meu destino
            
            for(i=0; i<n; i++){ //i assume as cidades, de 0 a 5

                for(h=0; cidadesvisitadas[h]!= 10; h++){ 
                    if(cidadesvisitadas[h] == i){ //verifica se a cidade i ja esta no vetor
                        k = 1;
                        break;
                    }
                }
                //d e uma auxiliar para distancia
                if(k != 1){  //se k diferente de 1 entao nao passei por ess cidade ainda
                    if(vertices[partida][i]!=0 && (d==0 || d>vertices[partida][i])){ //verifco se a posicao nao e zero e 
                        d=vertices[partida][i];                                     //se a distancia e maior que o valor da minha posicao atual
                        cidadesvisitadas[x] = i;}                                   //neste caso o valor da minha posicao e menor, e acrescento essa posicao no meu vetor de cidades
                }
                k = 0; //variavel auxiliar para indicar que ja passamos na cidade
            }
            distanciatotal +=d; //somo as menores distancias
        }else{ //se cheguei ele sai do while e imprime o resultado final
            j++;
            break;
        }
        
        partida=cidadesvisitadas[x]; //minha proxima partida esta na posicao x do meu vetor
        x++;
        d=0; //distancia e zerada
        j++; //proxima analise da distancia
    }

    printf("Distancia total entre %d e %d: %d\n", inicio, destino, distanciatotal); //imprimindo a origem e destino e sua distancia final pela tecnica gulosa
    for(int i = 0; i< x; i++){  //imprimindo caminho percorrido
        if(i==0)
            printf("Caminho: %d", cidadesvisitadas[i]);
        else
            printf("->%d", cidadesvisitadas[i]);
    }

    printf("\n");

    return 0;

}