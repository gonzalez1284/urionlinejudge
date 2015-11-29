#include <stdio.h>
  
int main() {
  
    int v[46], i, c;
 
    v[0] = 0;
    v[1] = 1;
 
    for(i = 2; i < 46; i++){
 
        v[i] = v[i-1] + v[i-2];
 
    }
 
    scanf("%d", &c);
 
    for(i = 0; i < c; i++){
 
        if(i+1 < c){
 
            printf("%d ", v[i]);
 
        } else {
 
            printf("%d\n", v[i]);
 
        }
 
    }
 
 
  
    return 0;
}
