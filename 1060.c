#include <stdio.h>
  
int main() {
  
    double v[6];
    int i, p;
 
    i = 0;
    p = 0;
 
    scanf("%lf", &v[0]);
    scanf("%lf", &v[1]);
    scanf("%lf", &v[2]);
    scanf("%lf", &v[3]);
    scanf("%lf", &v[4]);
    scanf("%lf", &v[5]);
 
    for(i; i<6; i++){
 
        if(v[i] > 0){ p++; }
 
    }
 
    printf("%d valores positivos\n", p);
  
    return 0;
}
