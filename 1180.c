#include <stdio.h>

int main(){

    int n, i, m = 0;

    scanf("%d", &n);

    int x[n];

    for(i = 0; i < n; i++){

        scanf("%d", &x[i]);

        if(x[i] < x[m]){

            m = i;
        }


    }

    printf("Menor valor: %d\n", x[m]);
    printf("Posicao: %d\n", m);


    return 0;

}
