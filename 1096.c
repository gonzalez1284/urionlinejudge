#include <stdio.h>
  
int main() {
  
    int i = 1, j = 7;
 
    do {
 
        for(j; j >= 5; j--){
 
            printf("I=%d J=%d\n", i, j);
 
        }
 
        j = 7;
        i += 2;
 
    }while(i <= 9);
  
    return 0;
}
