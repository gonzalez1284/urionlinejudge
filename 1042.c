#include <stdio.h>
  
int main() {
  
    int a, b, c, d, f, g;
    int swp;
 
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    d =  a;
    f =  b;
    g =  c;
 
    if(a > b){
 
        swp = a;
        a = b;
        b = swp;
 
    }
 
    if( a > c){
 
        swp = a;
        a = c;
        c = swp;
 
    }
 
    if(b > c){
 
        swp = b;
        b = c;
        c = swp;
 
    }
 
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", d);
    printf("%d\n", f);
    printf("%d\n", g);
  
    return 0;
}
