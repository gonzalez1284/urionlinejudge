#include <stdio.h>
  
int main() {
  
   int A, B, r;
 
    scanf("%d", &A);
    scanf("%d", &B);
 
    if(B > A){
 
        r = B % A;
 
    } else {
 
        r = A % B;
 
    }
 
    if(r == 0){
 
        printf("Sao Multiplos\n");
 
    } else {
 
        printf("Nao sao Multiplos\n");
    }
  
    return 0;
}
