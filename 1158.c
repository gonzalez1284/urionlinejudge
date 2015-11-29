#include <stdio.h>
  
int main() {
  
    int n, x, y, q, sum;
 
    scanf("%d", &n);
 
    while(n != 0){
 
        sum = 0;
        q = 0;
 
        scanf("%d", &x);
        scanf("%d", &y);
 
        while(q != y){
 
            if(x % 2 != 0){
 
                sum += x;
                q++;
 
            }
 
            x++;
 
        }
 
        printf("%d\n", sum);
 
        n--;
    }
  
    return 0;
}
