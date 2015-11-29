#include <stdio.h>
  
int main() {
  
    // OPCAO A SER LIDA
    int n;
 
    /* ARMAZENA A QUANTIDADE DE COMBUSTIVEIS NO VETOR
     * POSICOES:
     *   0 = Álcool
     *   1 = Gasolina
     *   2 = Diesel
     */
    int v[3] = {0,0,0};
 
    // LE A OPCAO INICIAL
    scanf("%d", &n);
 
    // ENQUANTO A OPÇÃO FOR DIFERENTE DE 4 (FIM)
    while(n != 4 && n > 0){
 
        switch(n){
 
            case 1:
                //  ADICIONA + 1 AO ALCOOL
                v[0]++;
                break;
            case 2:
                // ADICIONA + 1 A GASOLINA
                v[1]++;
                break;
            case 3:
                // ADICIONA + 1 A DIESEL
                v[2]++;
                break;
            default:
                // NENHUMA DAS OPCOES - NAO FAZ NADA
                break;
 
        }
 
        scanf("%d", &n);
 
    }
 
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", v[0]);
    printf("Gasolina: %d\n", v[1]);
    printf("Diesel: %d\n", v[2]);
 
  
    return 0;
}
