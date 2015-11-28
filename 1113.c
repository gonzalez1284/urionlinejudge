#include <stdio.h>
  
int main() {
  
   int x, y;
 
    // ENQUANTO LER X E Y E X FOR DIFERENTE DE Y, EXECUTA O LOOP
    while(scanf("%d", &x) && scanf("%d", &y) && x != y){
 
        if(x > y){
 
            printf("Decrescente\n");
 
        } else {
 
            printf("Crescente\n");
 
        }
 
 
    }
  
    return 0;
}
