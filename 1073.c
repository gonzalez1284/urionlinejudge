#include <stdio.h>
  
int main() {
  
    int n, i;
 
    scanf("%d", &n);
 
    for(i = 1; i <= n; i++ ){
 
        if(i % 2 == 0){
 
            printf("%d^2 = %.0lf\n", i, pow(i,2) );
 
        }
 
    }
  
    return 0;
}
