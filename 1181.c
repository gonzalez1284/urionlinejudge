#include <stdio.h>

#define LINHA 12
#define COLUNA 12

int main(){

    int l, i, j;
    char t;
    double m[LINHA][COLUNA], tmp = 0;

    scanf("%d", &l);
    scanf(" %c", &t);

    for(i = 0; i < LINHA; i++){

        for(j = 0; j < COLUNA; j++){

            scanf("%lf", &m[i][j]);

            if(i == l){

                tmp += m[i][j];

            }

        }

    }

    if(t == 'S'){

        printf("%.1lf\n", tmp);

    } else if(t == 'M'){

        printf("%.1lf\n", tmp / 12.0);

    }

    return 0;
}
