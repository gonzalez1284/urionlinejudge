#include <stdio.h>
  
int main() {
  
   int v[5], i = 0, par = 0, imp = 0, pos = 0, neg = 0;
 
    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    scanf("%d", &v[4]);
 
    for(i; i < 5; i++){
 
        if(v[i] % 2 == 0){
 
            par++;
 
        } else {
 
            imp++;
 
        }
 
        if(v[i] > 0){
 
            pos++;
 
        } else if(v[i] < 0) {
 
            neg++;
 
        }
 
    }
 
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
  
    return 0;
}
