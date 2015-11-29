#include <stdio.h>
  
int main() {
  
    int i = 0, j = 0;
    double k = 0;
 
    while(scanf("%d", &i) && i > 0){
 
        j += i;
        k++;
 
    }
 
    printf("%.2lf\n", j / k);
  
    return 0;
}
