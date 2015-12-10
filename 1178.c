#include <stdio.h>

int main(){

    int i = 0;
    double n[100];

    scanf("%lf", &n[0]);

    printf("N[%d] = %.4lf\n", i, n[i]);

    for(i = 1; i < 100; i++){

        n[i] = n[i - 1] / 2.0;

        printf("N[%d] = %.4lf\n", i, n[i]);

    }

    return 0;

}
