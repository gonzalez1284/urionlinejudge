#include <stdio.h>
  
int main() {
  
     int x, a, b, i, sum;
 
    scanf("%d", &x);
 
    do{
 
        scanf("%d", &a);
        scanf("%d", &b);
 
        i = a;
        sum = 0;
 
        if(a > b){
 
            a = b;
            b = i;
            i = a;
 
        }
 
        i++;
 
        for(i ; i < b; i++){
 
            if( i % 2 != 0 ){
 
                sum += i;
 
            }
 
        }
 
        printf("%d\n", sum);
 
        x--;
 
    } while(x != 0);
  
    return 0;
}
