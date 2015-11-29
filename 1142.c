#include <stdio.h>
  
int main() {
  
    int n, i = 1, c = 0;
 
    scanf("%d", &n);
 
    for(i; i < n * 3 + n; i++){
 
        printf("%d ", i);
 
        c++;
 
        if(c == 3){
 
            printf("PUM\n");
            c = 0;
            i++;
 
        }
 
    }
  
    return 0;
}
