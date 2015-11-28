#include <stdio.h>
  
int main() {
  
    int X, i = 0;
 
    scanf("%d", &X);
 
    for(i ; i <= X; i++){
 
        if(i % 2 != 0){
 
            printf("%d\n", i);
 
        }
 
    }
  
    return 0;
}
