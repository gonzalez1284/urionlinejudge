#include <stdio.h>
  
int main() {
  
    double s, a;
    int p;
 
    scanf("%lf", &s);
 
    if(s <= 400 && s > 0){
 
        a = s * 0.15;
        p = 15;
 
    } else if(s > 400 && s <= 800){
 
        a = s * 0.14;
        p = 12;
 
    } else if(s > 800 && s <= 1200){
 
        a = s * 0.10;
        p = 10;
 
    } else if(s > 1200 && s <= 2000){
 
        a = s * 0.07;
        p = 7;
 
    } else {
 
        a = s * 0.04;
        p = 4;
 
    }
 
 
    printf("Novo salario: %.2lf\n", s + a);
    printf("Reajuste ganho: %.2lf\n", a);
    printf("Em percentual: %d %%\n", p);
  
    return 0;
}
