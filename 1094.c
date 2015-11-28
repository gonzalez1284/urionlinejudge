#include <stdio.h>
  
int main() {
  
    char opt;
    int i, n, x, sapo = 0, rato = 0, coelho = 0;
 
    scanf("%d", &n);
 
    for(i = 0; i < n; i++){
 
        scanf(" %d", &x);
        scanf(" %c", &opt);
 
        if(opt == 'C'){
 
            coelho += x;
 
        } else if(opt == 'R'){
 
            rato += x;
 
        } else if(opt == 'S'){
 
            sapo += x;
 
        }
 
    };
 
    n = sapo + rato + coelho;
 
    printf("Total: %d cobaias\n", n);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
 
    printf("Percentual de coelhos: %.2lf %%\n", (coelho == 0 ? 0.0 : (coelho * 100.0) / n)  );
    printf("Percentual de ratos: %.2lf %%\n", rato == 0 ? 0.0 : (rato * 100.0) / n );
    printf("Percentual de sapos: %.2lf %%\n", sapo == 0 ? 0.0 : (sapo * 100.0) / n );
  
    return 0;
}
