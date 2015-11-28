#include <stdio.h>
  
int main() {
  
    int codp1, qtdp1, codp2, qtdp2;
    double valorp1, valorp2, r;
 
    scanf("%d", &codp1);
    scanf("%d", &qtdp1);
    scanf("%lf", &valorp1);
 
    scanf("%d", &codp2);
    scanf("%d", &qtdp2);
    scanf("%lf", &valorp2);
 
    r = (valorp1 * qtdp1) + (valorp2 * qtdp2);
 
    printf("VALOR A PAGAR: R$ %.2lf\n", r);
  
    return 0;
}
