#include <stdio.h>
// MACRO NECESSÁRIA PARA IMPRESSÃO DE INTEIRO 64-BITS
#define __STDC_FORMAT_MACROS
// INCLUDE PARA USO DE INTEIRO 64-BITS
#include <stdint.h>
#include <inttypes.h>
 
int main(){
 
    int t, n;
    // INTEIRO 64-BITS SEM SINAL (POSITIVO)
    uint64_t v[61];
 
    v[0] = 0;
    v[1] = 1;
 
    for(t = 2; t < 61; t++){
 
        v[t] = v[t - 1] + v[t - 2];
 
    }
 
    scanf("%d", &t);
 
    while(t != 0){
 
        scanf("%d", &n);
 
        printf("Fib(%d) = %" PRIu64 "\n", n, v[n]);
 
        t--;
    }
 
    return 0;
 
}
