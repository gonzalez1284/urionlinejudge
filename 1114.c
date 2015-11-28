#include <stdio.h>
  
int main() {
  
   // VARIAVEL PARA ARMAZENAR SENHA
    int s;
 
    // EXECUTA LEITURA E AO MESMO TEMPO COMPRA SE O VALOR É IGUAL A SENHA INFORMADA
    // SE FOR IGUAL, FINALIZA O LOOP E IMPRIME A MENSAGEM DE ACESSO PERMITIDO
    while( scanf("%d", &s) && s != 2002){
 
        printf("Senha Invalida\n");
 
    }
 
    printf("Acesso Permitido\n");
 
    return 0;
}
