#include <stdio.h>
  
int main() {
  
    int horas, vmedia, distancia;
    double litros;
 
    scanf("%d", &horas);
    scanf("%d", &vmedia);
 
    distancia = vmedia * horas;
 
    litros = distancia / 12.0;
 
    printf("%.3lf\n", litros);
  
    return 0;
}
