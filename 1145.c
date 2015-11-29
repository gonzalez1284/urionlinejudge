#include <stdio.h>
  
int main() {
  
   int x, y, i, j = 1;
 
    scanf("%d", &x);
    scanf("%d", &y);
 
    if( (x > 1 && x < 20) && (y > x && y < 100000) ){
 
        for(i = 1; i <= y; i++){
 
            if(j < x){
 
                printf("%d ", i);
                j++;
 
            } else {
 
                printf("%d\n", i);
                j = 1;
            }
 
 
        }
 
 
    }
  
    return 0;
}
