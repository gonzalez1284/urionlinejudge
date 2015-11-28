#include <stdio.h>
  
int main() {
  
    int x, y, swp = 0;
 
    scanf("%d", &x);
    scanf("%d", &y);
 
    if(x > y){
 
        swp = x;
        x = y;
        y = swp;
 
    }
 
    swp = 0;
    x++;
 
    for(x; x < y; x++){
 
        if(x % 2 != 0){
 
            //printf("%d\n", x);
 
            swp += x;
 
        }
 
    }
 
    printf("%d\n", swp);
 
  
    return 0;
}
