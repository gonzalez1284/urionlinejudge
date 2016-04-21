#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Ho");

        if(i+1 < n){

            printf(" ");

        } else {

            printf("!\n");
        }

    }

    return 0;

}
