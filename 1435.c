/*
 * Author: Thiago (gonzalez1284)
 * Language:  C
 */

#include <stdio.h>

int min(int a, int b){

    return a > b ? b : b == a ? a : a;
}

int main(){

    int n, i, j;

    do {

        scanf("%d", &n);

        for(i = 0; i < n; i++){

            for(j = 0; j < n; j++){

                if(j != 0){

                    printf(" ");
                }

                printf("%3d", min(min(i, (n - 1) - i ), min(j, (n - 1) - j )) + 1);

            }

            printf("\n");

        }

        if(n != 0){

            printf("\n");

        }

    } while(n != 0);

    return 0;
}
