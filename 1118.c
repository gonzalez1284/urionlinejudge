#include <stdio.h>
  
int main() {
  
    double n, m = 0;
    int o = 1, p;
 
    while(o != 2 ){
 
        p = 0;
        m = 0;
 
        while(p != 2){
 
            scanf("%lf", &n);
 
            if(n < 0 || n > 10){
 
                printf("nota invalida\n");
 
            } else {
 
                p++;
                m += n;
 
            }
 
 
        }
 
        printf("media = %.2lf\n", m / 2.0);
 
        do{
 
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &o);
 
        } while(o > 2 || o < 1);
 
 
    }
  
    return 0;
}
