#include <stdio.h>
  
int main() {
  
    // VALOR INICIO
    int di[5] = {0, 0, 0, 0, 0};
    // VALOR FIM,
    int df[5] = {0, 0, 0, 0, 0};
 
    scanf("%*s %d", &di[0]);
    scanf("%d %*s %d %*s %d", &di[1], &di[2], &di[3]);
    scanf("%*s %d", &df[0]);
    scanf("%d %*s %d %*s %d", &df[1], &df[2], &df[3]);
 
    //printf("%d - %d - %d - %d\n", di[0], di[1], di[2], di[3]);
    //printf("%d - %d - %d - %d\n", df[0], df[1], df[2], df[3]);
 
    // CONVERTE TUDO PARA SEGUNDOS
    di[4] = di[0] * 86400;
    di[4] += di[1] * 3600;
    di[4] += di[2] * 60;
    di[4] += di[3];
 
    df[4] = df[0] * 86400;
    df[4] += df[1] * 3600;
    df[4] += df[2] * 60;
    df[4] += df[3];
 
    //printf("%d\n", di[4]);
    //printf("%d\n", df[4]);
 
    if(di[4] > df[4] || di[4] == df[4]){
 
        di[0] =  di[4] - df[4];
 
    } else {
 
        di[0] = df[4] - di[4];
 
    }
 
    // CONVERTE
    // DIAS
    df[0] = di[0] / 86400;
    // HORAS
    di[1] = di[0] - df[0] * 86400;
    df[1] = di[1] / 3600;
    // MINUTOS
    di[2] = di[1] - df[1] * 3600;
    df[2] = di[2] / 60;
    // SEGUNDOS
    df[3] = di[2] - df[2] * 60;
 
    printf("%d dia(s)\n", df[0]);
    printf("%d hora(s)\n", df[1]);
    printf("%d minuto(s)\n", df[2]);
    printf("%d segundo(s)\n", df[3]);
 
  
    return 0;
}
