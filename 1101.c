#include <stdio.h>
  
int main() {
  
    int m, n, s, i;
 
    // LE OS VALORES INICIAIS DE M E N
    scanf("%d", &m);
    scanf("%d", &n);
 
    // EXECUTA ENQUANDO OS VALORES FOREM MAIORES DO QUE 0
    while(m > 0 && n > 0){
 
        // RESETA AS VARIAVEIS
        i = 0;
        s = 0;
 
        // ORDENA OS VALORES EM ORDEM CRESCENTE, SE NECESSÁRIO
        if(m > n){
 
            i = m;
            m = n;
            n = i;
 
        }
 
 
        // IMPRIME O RANGE DE NÚMEROS ENTRE M E N
        for(m; m <= n; m++){
 
            printf("%d ", m);
            s += m; // SOMA OS VALORES
 
        }
 
        // IMPRIME A SOMA
        printf("Sum=%d\n", s);
 
        // LE O PROXIMO VALOR
        scanf("%d", &m);
        scanf("%d", &n);
 
    }
 
  
    return 0;
}
