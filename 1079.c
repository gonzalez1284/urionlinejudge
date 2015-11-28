#include <stdio.h>
  
int main() {
  
    int n, i;
    double v[3];
 
    scanf("%d", &n);
 
    do {
 
        scanf("%lf", &v[0]);
        scanf("%lf", &v[1]);
        scanf("%lf", &v[2]);
 
        //sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
        printf("%.1lf\n", (v[0] * 2 + v[1] * 3 + v[2] * 5) / 10  );
 
        n--;
 
    } while(n != 0);
  
    return 0;
}
