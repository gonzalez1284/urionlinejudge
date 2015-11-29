#include <stdio.h>
  
int main() {
  
    int x, y, tmp = 0;
 
    scanf("%d", &x);
    scanf("%d", &y);
 
    if(x > y){
 
        tmp = x;
        x = y;
        y = tmp;
 
 
    }
     
    // NÃO INCLUI O VALOR DE INICIO DIGITADO
    for(x = x + 1; x < y; x++){
 
        if(x % 5 == 3 || x % 5 == 2){
 
            printf("%d\n", x);
 
        }
 
 
    }
  
    return 0;
}
