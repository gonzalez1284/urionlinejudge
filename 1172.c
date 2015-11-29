#include <stdio.h>
  
int main() {
  
    int x[10], i = 0;
 
    while(i < 10){
 
        scanf("%d", &x[i]);
 
        if(x[i] <= 0){
 
            x[i] = 1;
 
        }
 
        printf("X[%d] = %d\n", i, x[i] );
 
        i++;
 
    }
  
    return 0;
}
