#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    while(scanf("%d", &a) && a != 0 && scanf("%d", &b) && scanf("%d", &c)){

        printf("%d\n", (int) sqrt((a * b) * (100.0 / c)));

    }

    return 0;
}
