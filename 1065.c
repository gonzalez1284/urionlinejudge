#include <stdio.h>
  
int main() {
  
    int v[5], i, p = 0;
 
    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    scanf("%d", &v[4]);
 
    for(i = 0; i < 5 ; i++){
 
        if(v[i] % 2 == 0){
 
            p++;
 
        }
 
    }
 
    printf("%d valores pares\n", p);
  
    return 0;
}
