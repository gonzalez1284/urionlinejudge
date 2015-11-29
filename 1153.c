#include <stdio.h>
  
int main() {
  
    int n, f;
 
    // LE O VALOR INICIAL
    scanf("%d", &n);
 
    // SE O VALOR ESTIVER ENTRE 1 E 12
    if(n > 0 && n < 13){
 
        // SE FOR 1, FATORIAL SERA O MESMO NUMERO
        if(n == 1){
 
            f = 1;
 
        // SENAO CALCULA
        } else {
 
            f = n;
 
            // ENQUANTO N FOR DIFERENTE DE 1
            while(n != 1){
 
                // F RECEBE SEU VALOR * O VALOR DE N - 1;
                f *= (n-1);
 
                // DECREMENTA N
                n--;
            }
 
 
        }
 
        // IMPRIME FATORIAL
        printf("%d\n", f);
 
    }
  
    return 0;
}
