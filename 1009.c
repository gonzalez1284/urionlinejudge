#include <stdio.h>
  
int main() {
  
    char nome[256];
    double sal_fixo, total_vendas, sal_final;
     
    scanf("%s", nome);
    scanf("%lf", &sal_fixo);
    scanf("%lf", &total_vendas);
     
    sal_final = sal_fixo + (total_vendas * 0.15);
     
    printf("TOTAL = R$ %.2lf\n", sal_final);
  
    return 0;
}
