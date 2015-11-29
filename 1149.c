#include <stdio.h>
  
int main() {
  
    int a, n, i = 0, sum = 0;
 
    scanf("%d %d", &a, &n);
 
    while(n <= 0){
 
        scanf("%d", &n);
 
    }
 
    while(i != n){
 
        sum += a;
        a++;
        i++;
 
    }
 
    printf("%d\n", sum);
  
    return 0;
}
