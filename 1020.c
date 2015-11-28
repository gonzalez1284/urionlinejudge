#include <stdio.h>
  
int main() {
  
    int dias;
    int idade[] = {0,0,0};
 
    scanf("%d", &dias);
 
    idade[0] = dias / 365;
    idade[1] = ( dias - (idade[0] * 365)) / 30;
    idade[2] = ( dias - (idade[0] * 365)) - (idade[1] * 30);
 
    printf("%d ano(s)\n", idade[0]);
    printf("%d mes(es)\n", idade[1]);
    printf("%d dia(s)\n", idade[2]);
  
    return 0;
}
