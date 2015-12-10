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

    // SOMA AREA EM VERDE (ACIMA DA DIAGONAL)
    j = 0;

    for(i = 0; i < 12; i++){

        j++;

        for(k = j; k < 12; k++){

           tmp += m[i][k];

        }


    }


    if(o == 'S'){

        printf("%.1lf\n", tmp);

    } else if(o == 'M'){

        printf("%.1lf\n", tmp / 66.0);

    }

    return 0;
}
