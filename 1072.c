#include <stdio.h>
  
int main() {
  
    int n, i = 0, in = 0, out = 0, x = 0;
 
    scanf("%d", &n);
 
    for(i; i < n; i++){
 
        scanf("%d", &x);
 
        if(x >= 10 && x <= 20){
 
            in++;
 
        } else {
 
            out++;
 
        }
 
    }
 
    printf("%d in\n", in);
    printf("%d out\n", out);
 
  
    return 0;
}
