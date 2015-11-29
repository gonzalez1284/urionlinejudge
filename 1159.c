#include <stdio.h>
  
int main() {
  
    int x, sum = 0, q = 0;
 
    while(scanf("%d", &x) && x != 0){
 
        sum = 0;
        q = 0;
 
        while(q != 5){
 
            if(x % 2 == 0){
 
                sum += x;
                q++;
 
            }
 
            x++;
        }
 
        printf("%d\n", sum);
    }
  
    return 0;
}
