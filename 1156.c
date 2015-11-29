#include <stdio.h>
  
int main() {
  
    double s = 1;
    int i, j = 1;
 
    for(i = 3; i <= 39; i = i + 2){
 
        s += i / pow(2,j);
        //printf("%d / %.2lf = %.2lf\n",i, pow(2,j), s);
        j++;
 
    }
 
    printf("%.2lf\n", s);
  
    return 0;
}
