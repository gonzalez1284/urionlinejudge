#include <stdio.h>
  
int main(){
 
    int q, n, i, p;
 
    // LE A QUANTIDADE DE NUMEROS A SEREM LIDOS
    scanf("%d", &q);
 
    // N (1 ≤ N ≤ 100)
    if(q >= 1 && q <= 100){
 
        // EXECUTA ENQUANTO A QUANTIDADE FOR MAIOR QUE 0
        while(q > 0){
 
            // LE O NUMERO A SER CONSIDERADO PRIMO
            scanf("%d", &n);
 
            // VERIFICA SE O NUMERO ESTA DENTRO DO RANGE PERMITIDO
            // (1 < X ≤ 10^7),
            if(n > 1 && n <= pow(10, 7)){
 
               // CONSIDERA-SE QUE O NUMERO EH PRIMO A PRINCÍPIO
                p = 1;
 
                // SE N = 1 NAO EH PRIMO
                if(n == 1){
 
                    p = 0;
 
                // SENAO, EXECUTA VERIFICACAO
                } else {
 
                    // INICIA EM 2 POIS 1 NAO EH CONSIDERADO PRIMO
                    for(i = 2; i < n; i++){
 
                        // VERIFICA SE EH POSSÍVEL DIVIDIR N POR UM NÚMERO MENOR QUE N E MAIOR DO QUE 1
                        // SE HOUVER DIVISAO, NAO EH PRIMO
                        if(n % i == 0){
 
                            // MARCA COMO NAO SENDO PRIMO;
                            p = 0;
                            break;  // FINALIZA O LOOP
 
                        }
 
 
                    }
 
                }
 
                // INFORMA SE EH PRIMO OU NAO
                // 1 = PRIMO
                // 0 = NAO PRIMO
                if(p == 1){
 
                    printf("%d eh primo\n", n);
 
                } else {
 
                    printf("%d nao eh primo\n", n);
 
                }
 
 
            }
 
 
            // RETIRA UM DA QUANTIDADE DE NUMEROS A SEREM LIDOS
            q--;
 
        }
 
 
 
     }
 
 
 
 
    return 0;
}
