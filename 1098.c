#include <stdio.h>
 
int main(){
     
    // * UTILIZADO INT DEVIDO PRROBLEMA DE ARREDONDAMENTO EXPLICADO PELO USUÁRIO rukzaper NO FORUM DESTE EXERCÍCIO 
    // http://www.urionlinejudge.com.br/forum/viewtopic.php?f=2&t=100
    int I = 0, k;
    int J[3] = {10, 20, 30};
 
    while (I <= 20) {
 
        float z = I/10.0;
 
        for(k = 0; k < 3; k++){
 
            if(z == 0 || z == 1 || z == 2){
 
                printf("I=%.0f ", z);
 
            } else {
 
                printf("I=%.1f ", z);
 
            }
 
            float f = J[k]/10.0;
 
            if(f == 0 || f == 1 || f == 2 || f == 3 || f == 4 || f == 5 ){
 
                printf("J=%.0f\n", f);
 
            } else {
 
                printf("J=%.1f\n", f);
 
            }
 
            //printf("I=%.1f J=%.1f\n", (I/10.0), (J[k]/10.0));
            J[k] += 2;
 
        }
 
        I += 2;
    }
 
    return 0;
 
}
