#include <stdio.h>
  
int main() {
  
    double s = 1, i;
 
    for(i = 2; i <= 100; i++){
 
        s += 1 / i;
 
    }
 
    printf("%.2lf\n", s);
 
 
  
    return 0;
}
