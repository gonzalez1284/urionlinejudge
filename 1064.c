#include <stdio.h>
  
int main() {
  
    int p = 0, i = 0;
    double v[6], r = 0;
 
    scanf("%lf", &v[0]);
    scanf("%lf", &v[1]);
    scanf("%lf", &v[2]);
    scanf("%lf", &v[3]);
    scanf("%lf", &v[4]);
    scanf("%lf", &v[5]);
 
    for(i; i < 6; i++){
 
        if(v[i] > 0){
 
            r += v[i];
            p++;
 
        }
 
    }
 
    printf("%d valores positivos\n", p);
    printf("%.1lf\n", r / p );
  
    return 0;
}
