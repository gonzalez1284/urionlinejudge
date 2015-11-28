#include <stdio.h>
  
int main() {
  
    int c, q;
    double total;
    double precos[] = {4.0, 4.50, 5.0, 2.0, 1.5};
 
    scanf("%d", &c);
    scanf("%d", &q);
 
    total = q * precos[c - 1];
 
    printf("Total: R$ %.2lf\n", total);
  
    return 0;
}
