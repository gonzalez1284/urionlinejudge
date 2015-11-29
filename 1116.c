#include <stdio.h>
  
int main() {
  
    int n;
    double x, y;
 
    scanf("%d", &n);
 
    do{
 
        scanf("%lf", &x);
        scanf("%lf", &y);
 
        if(y == 0.0){
 
            printf("divisao impossivel\n");
 
        } else {
 
            printf("%.1lf\n", (x / y));
 
        }
 
        n--;
 
    }while(n > 0);
 
    return 0;
}
