#include <stdio.h>
  
int main() {
  
    int x, y, h;
 
    scanf("%d", &x);
    scanf("%d", &y);
 
    if(x > y || x == y){
 
        h = (24 - x) + y;
 
    } else if(x < y){
 
        h = y - x;
 
    }
 
    printf("O JOGO DUROU %d HORA(S)\n", h);
  
    return 0;
}
