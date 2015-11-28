#include <stdio.h>
 
int main(){
 
    int x, y;
     
    /*
     * Executa o loop enquando a leitura de x e y for bem sucedida 
     * e x e y forem diferentes de 0
    */
    while( (scanf("%d", &x) && scanf("%d", &y)) && (x != 0 && y != 0)){
 
        if(x > 0){
 
            // PRIMEIRO QUADRANTE X E Y POSITIVO
            if(y > 0){
 
                printf("primeiro\n");
             
            // QUARTO QUADRANTE X POSITIVO, Y NEGATIVO
            } else {
 
                printf("quarto\n");
 
            }
 
        } else {
 
            // SEGUNDO X NEGATIVO, Y POSITIVO
            if(y > 0){
 
                printf("segundo\n");
 
            // TERCEIRO: X NEGATIVO, Y NEGATIVO
            } else {
 
                printf("terceiro\n");
 
            }
 
        }
 
 
 
    }
 
 
    return 0;
 
}
