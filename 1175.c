#include <stdio.h>
  
int main() {
  
    int n[20], i;
 
    // LE O VETOR ARMAZENANDO EM ORDEM INVERSA
    for(i = 19; i >= 0; i--){
 
        scanf("%d", &n[i]);
 
    }
 
    // EXIBE O RESULTADO
    for(i = 0; i < 20; i++){
 
        printf("N[%d] = %d\n", i, n[i]);
 
    }
  
    return 0;
}
