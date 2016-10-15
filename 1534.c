#include <stdio.h>

int main(){

    int x, i, j;

    while(scanf("%d", &x) != EOF){

        for(i = 0; i < x; i++){

            for(j = 0; j < x; j++){

                if( i + j == x - 1) {

                    printf("2");

                } else if(i == j){

                    printf("1");

                } else {

                    printf("3");

                }

            }

            printf("\n");

        }

    }

    return 0;
}
