#include <stdio.h>

int main(){

    int i, j, l;
    double m[12][12], tmp = 0;
    char o;

    scanf(" %c", &o);

    for(i = 0; i < 12; i++){

        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

        }

    }

    l = 11;

    // PARTE SUPERIOR
    // DE CIMA PARA BAIXO
    for(i = 1; i <= 5; i++){

        for(j = l; j < 12; j++){

            tmp += m[i][j];

        }

        l--;

    }

    l = 11;

    // PARTE INFERIOR
    // DE BAIXO PARA CIMA
    for(i = 10; i >= 6; i--){

       for(j = l; j < 12; j++){

           tmp += m[i][j];

       }

       l--;

    }

    if(o == 'S'){

        printf("%.1lf\n", tmp);

    } else if(o == 'M'){

        printf("%.1lf\n", tmp / 30.0);

    }

    return 0;
    
}
