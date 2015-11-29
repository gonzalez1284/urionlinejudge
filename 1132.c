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
 
    for(x; x <= y; x++){
 
        if(x % 13 != 0){
 
            swp += x;
 
        }
 
    }
 
    printf("%d\n", swp);
 
    return 0;
}
