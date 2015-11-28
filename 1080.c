#include <stdio.h>
  
int main() {
  
   int v[100], i, m = 0, p = 0;
 
    for(i = 0; i < 100; i++){
 
        scanf("%d", &v[i]);
 
    }
 
    for(i = 0; i < 100 ; i++){
 
        if(v[i] > m){
 
            m = v[i];
            p = i;
 
        }
 
    }
 
    printf("%d\n", m);
    printf("%d\n", p + 1 );
  
    return 0;
}
