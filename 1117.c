#include <stdio.h>
  
int main() {
  
    double n = 0, t = 0;
    int p = 0;
 
    while(p != 2){
 
        scanf("%lf", &n);
 
        if(n < 0 || n > 10){
 
            printf("nota invalida\n");
 
        } else {
 
            p++;
            t += n;
 
        }
 
 
    }
 
    printf("media = %.2lf\n", t / 2.0);
  
    return 0;
}
