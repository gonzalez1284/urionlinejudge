#include <stdio.h>
  
int main() {
  
    int num, horast;
    double valorHora, salario;
     
    scanf("%d", &num);
    scanf("%d", &horast);
    scanf("%lf", &valorHora);
     
    salario = horast * valorHora;
     
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);
  
    return 0;
}
