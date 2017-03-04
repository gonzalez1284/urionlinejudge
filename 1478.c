#include <stdio.h>

int main(){

    int n, i, j;

    do {

        scanf("%d", &n);

        for(i = 0; i < n; i++){

            for(j = 0; j < n; j++){

                if(j != 0){

                    printf(" ");
                }

                printf("%3d", abs(i - j) + 1);

            }

            printf("\n");

        }

        if(n != 0){

            printf("\n");

        }

    } while(n != 0);

    return 0;
}
