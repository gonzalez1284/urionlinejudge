#include <stdio.h>
  
int main() {
  
    int N,i;
    int notas[] = {100,50,20,10,5,2,1};
    int resultados[] = {0,0,0,0,0,0,0};
 
    scanf("%d", &N);
 
    resultados[0] = N / notas[0];
    resultados[1] = (N - ((resultados[0] * 100)))/50;
    resultados[2] = (N - ((resultados[0] * 100)+(resultados[1] * 50)))/20;
    resultados[3] = (N - ((resultados[0] * 100)+(resultados[1] * 50)+(resultados[2] * 20)))/10;
    resultados[4] = (N - ((resultados[0] * 100)+(resultados[1] * 50)+(resultados[2] * 20)+(resultados[3] * 10)))/5;
    resultados[5] = (N - ((resultados[0] * 100)+(resultados[1] * 50)+(resultados[2] * 20)+(resultados[3] * 10)+(resultados[4] * 5)))/2;
    resultados[6] = (N - ((resultados[0] * 100)+(resultados[1] * 50)+(resultados[2] * 20)+(resultados[3] * 10)+(resultados[4] * 5)+(resultados[5] * 2)))/1;
 
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", resultados[0]);
    printf("%d nota(s) de R$ 50,00\n", resultados[1]);
    printf("%d nota(s) de R$ 20,00\n", resultados[2]);
    printf("%d nota(s) de R$ 10,00\n", resultados[3]);
    printf("%d nota(s) de R$ 5,00\n", resultados[4]);
    printf("%d nota(s) de R$ 2,00\n", resultados[5]);
    printf("%d nota(s) de R$ 1,00\n", resultados[6]);
  
    return 0;
}
