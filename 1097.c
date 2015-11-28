#include <stdio.h>
  
int main() {
  
   int i = 1, j = 7, x = 0, k = 0;
 
    do {
 
        x = j;
 
        for(k; k < 3 ; k++){
 
            printf("I=%d J=%d\n", i, x);
            x--;
 
        }
        k = 0;
        i += 2;
        j += 2;
 
 
    }while(i <= 9);
  
    return 0;
}
