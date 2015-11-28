#include <stdio.h>
  
int main() {
  
    double A, B, C;
    double swp;
 
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
 
    if(B > A){
 
        swp = A;
        A = B;
        B = swp;
 
    }
 
    if(C > A){
 
        swp = A;
        A = C;
        C = swp;
 
    }
 
    if(C > B){
 
        swp = B;
        B = C;
        C = swp;
 
    }
   
    if(A >= (B + C)){
 
        printf("NAO FORMA TRIANGULO\n");
 
    } else {
 
        if(pow(A,2) == (pow(B,2) + pow(C,2))){
 
            printf("TRIANGULO RETANGULO\n");
 
        }
 
        if(pow(A,2) > (pow(B,2) + pow(C,2)) ){
 
            printf("TRIANGULO OBTUSANGULO\n");
 
        }
 
        if(pow(A,2) < (pow(B,2) + pow(C,2))){
 
            printf("TRIANGULO ACUTANGULO\n");
 
        }
 
        if( A == B && A == C){
 
            printf("TRIANGULO EQUILATERO\n");
 
        }
 
        if( (A == B && B != C) || (A != B && B == C) ){
 
            printf("TRIANGULO ISOSCELES\n");
 
        }
 
    }
  
    return 0;
}
