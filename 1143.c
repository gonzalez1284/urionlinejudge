#include <stdio.h>
  
int main() {
  
    int n, i;
 
    scanf("%d", &n);
 
    if(n > 1 && n < 1000){
 
        for(i = 1; i <= n; i++){
 
            printf("%d %.0lf %.0lf\n", i, pow(i,2), pow(i,3));
 
        }
 
 
    }
  
    return 0;
}
