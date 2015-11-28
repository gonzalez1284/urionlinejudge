#include <stdio.h>
  
int main() {
  
    double v, i = 0;;
 
    scanf("%lf", &v);
 
    if(v <= 2000){
 
        printf("Isento\n");
 
    } else {
 
        // REMOVE PARTE ISENTA, MANTENDO APENAS
        // O VALOR QUE PRECISA SER CALCULADO NO IMPOSTO
        v = v - 2000;
 
        // SUBTRAI O VALOR ENTRE 2000.01 e 3000.00 QUE SERÁ USADO PARA CALCULAR OS 8% (999.99)
        v = v - 999.99;
 
        // SE v É NEGATIVO, SIGNIFICA QUE A PARTE DOS 8% A SER CALCULADA É ABAIXO DE 999.99
        if(v < 0){
 
            // EXTRAI A QUANTIDADE A SER CALCULADA
            v = 999.99 + v; // + - = MENOS
            i = v * 0.08;
 
            // FINALIZA EXECUÇÃO NOS 8%
 
        } else {
 
            // CALCULA OS 8% EM CIMA DOS 999.99
            i = 999.99 * 0.08;
 
            // VERIFICA O VALOR RESTANTE PARA O CÁLCULO DO
            // IMPOSTO REFERENTE DE 3000.01 A 4500.00 (1499,99)
            v = v - 1499.99;
 
            if(v < 0){
 
                // SUBTRAI A PARTE INTEIRA PARA CALCULO DO IMPOSTO
                v = 1499.99 + v;
 
                // CALCULA OS 18% EM CIMA DO VALOR
                i += v * 0.18;
 
                // FINALIZA EM 18%
 
            } else {
 
                // CALCULA O IMPOSTO BASEADO NOS 18%
                i += 1499.99 * 0.18;
 
                // CALCULA O RESTANTE ACIMA DE 4500 (28%)
                i += v * 0.28;
 
 
            }
 
 
        }
 
        // EXIBE TOTAL DE IMPOSTO A SER PAGO
        printf("R$ %.2lf\n", i);
 
    }
 
  
    return 0;
}
