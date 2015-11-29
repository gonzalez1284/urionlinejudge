#include <stdio.h>
  
int main() {
  
    int t, v[1000], i, j;
 
    scanf("%d", &t);
 
    i = 0;
 
    while(i < 1000){
 
        for(j = 0; j < t; j++){
 
            if(i >= 1000){
 
                break;
 
            }
 
            v[i] = j;
            printf("N[%d] = %d\n", i, v[i]);
            i++;
 
        }
 
 
    }
  
    return 0;
}
