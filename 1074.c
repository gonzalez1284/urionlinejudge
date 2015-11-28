#include <stdio.h>
  
int main() {
  
    int n, i = 0, z;
 
    scanf("%d", &n);
 
    for(i; i < n; i++){
 
        scanf("%d", &z);
 
        if(z == 0){
 
            printf("NULL\n");
 
        } else {
 
            if(z % 2 == 0){
 
                printf("EVEN ");
 
            } else {
 
                printf("ODD ");
 
            }
 
            if(z > 0){
 
                printf("POSITIVE\n");
 
            } else {
 
                printf("NEGATIVE\n");
 
            }
 
 
        }
 
 
    }
  
    return 0;
}
