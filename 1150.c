#include <stdio.h>
  
int main() {
  
    int x, z, i = 0, c = 1;
 
    scanf("%d", &x);
 
    do{
 
        scanf("%d", &z);
 
 
    } while(x >= z);
 
    for(i = x; x < z; i++){
 
        x += i;
 
        c++;
 
    }
 
    printf("%d\n", c);
 
  
    return 0;
}
