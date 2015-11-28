#include <stdio.h>
  
int main() {
  
     double A, B, C, x, delta;
    scanf("%lf", &A);
 
    if(A <= 0){
 
        printf("Impossivel calcular\n");
 
    } else {
 
        scanf("%lf", &B);
        scanf("%lf", &C);
 
        delta = pow(B,2) - 4 * A * C;
 
        if(delta < 0){
 
            printf("Impossivel calcular\n");
 
        } else {
 
            B = B * -1;
 
            x = (B + sqrt(delta)) / (2 * A);
            printf("R1 = %.5lf\n", x);
            x = (B - sqrt(delta)) / (2 * A);
            printf("R2 = %.5lf\n", x);
 
        }
 
    }
 
  
    return 0;
}
