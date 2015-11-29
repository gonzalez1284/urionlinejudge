#include <stdio.h>
  
int main() {
  
    int x, i, j = 0;
 
    scanf("%d", &x);
 
    if(x > 1 && x < 1000){
 
        for(i = 1; i <= x; i++){
 
            printf("%d %.0lf %.0lf\n", i, pow(i,2), pow(i,3));
            printf("%d %.0lf %.0lf\n", i, pow(i,2) + 1, pow(i,3) + 1);
 
        }
 
    }
  
    return 0;
}
