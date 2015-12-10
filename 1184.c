#include <stdio.h>

int main(){

    int i, j, k;
    char o;
    double m[12][12], tmp = 0;

    scanf(" %c", &o);

    // PREENCHE A MATRIZ
    for(i = 0; i < 12; i++){

        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

        }

    }

    // SOMA AREA EM VERDE (ABAIXO DA DIAGONAL)
    j = 0;

    for(i = 0; i < 12; i++){

        for(k = 0; k < j; k++){

           tmp += m[i][k];

        }

        j++;

    }


    if(o == 'S'){

        printf("%.1lf\n", tmp);

    } else if(o == 'M'){

        printf("%.1lf\n", tmp / 66.0);

    }

    return 0;
}
