#include <stdio.h>
  
int main() {
  
    int x, i, j;
 
    while(scanf("%d", &x) && x != 0){
 
        j = 1;
 
        for(i = 1; i <= x; i++){
 
            if(j < x){
 
                printf("%d ", i);
                j++;
 
            } else {
 
                printf("%d\n", i);
 
            }
 
        }
 
 
    }
  
    return 0;
}
