#include <stdio.h>
  
int main() {
  
    double N;
    double notas[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    double moedas[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
    int qtd[] = {0,0,0,0,0,0};
    double resto[] = {0,0,0,0,0,0};
 
    scanf("%lf", &N);
 
    qtd[0] = N / notas[0];
    resto[0] = N - (notas[0] * qtd[0]);
    qtd[1] = resto[0] / notas[1];
    resto[1] = resto[0] - (notas[1] * qtd[1]);
    qtd[2] = resto[1] / notas[2];
    resto[2] = resto[1] - (notas[2] * qtd[2]);
    qtd[3] = resto[2] / notas[3];
    resto[3] = resto[2] - (notas[3] * qtd[3]);
    qtd[4] = resto[3] / notas[4];
    resto[4] = resto[3] - (notas[4] * qtd[4]);
    qtd[5] = resto[4] / notas[5];
    resto[5] = resto[4] - (notas[5] * qtd[5]);
 
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ %.2lf\n", qtd[0], notas[0]);
    printf("%d nota(s) de R$ %.2lf\n", qtd[1], notas[1]);
    printf("%d nota(s) de R$ %.2lf\n", qtd[2], notas[2]);
    printf("%d nota(s) de R$ %.2lf\n", qtd[3], notas[3]);
    printf("%d nota(s) de R$ %.2lf\n", qtd[4], notas[4]);
    printf("%d nota(s) de R$ %.2lf\n", qtd[5], notas[5]);
 
    qtd[0] = resto[5] / moedas[0];
    resto[0] = resto[5] - ( moedas[0] * qtd[0]);
    qtd[1] = resto[0] / moedas[1];
    resto[1] = resto[0] - (moedas[1] * qtd[1]);
    qtd[2] = resto[1] / moedas[2];
    resto[2] = resto[1] - (moedas[2] * qtd[2]);
    qtd[3] = resto[2] / moedas[3];
    resto[3] = resto[2] - (moedas[3] * qtd[3]);
    qtd[4] = resto[3] / moedas[4];
    resto[4] = resto[3] - (moedas[4] * qtd[4]);
    qtd[5] = resto[4] / moedas[5];
    resto[5] = resto[4] - (moedas[5] * qtd[5]);
 
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2lf\n", qtd[0], moedas[0]);
    printf("%d moeda(s) de R$ %.2lf\n", qtd[1], moedas[1]);
    printf("%d moeda(s) de R$ %.2lf\n", qtd[2], moedas[2]);
    printf("%d moeda(s) de R$ %.2lf\n", qtd[3], moedas[3]);
    printf("%d moeda(s) de R$ %.2lf\n", qtd[4], moedas[4]);
    printf("%d moeda(s) de R$ %.2lf\n", qtd[5], moedas[5]);
  
    return 0;
}
