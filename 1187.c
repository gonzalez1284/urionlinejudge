#include <stdio.h>

int main(){

    int i, j, k, l;
    double m[12][12], tmp = 0;
    char o;

    scanf(" %c", &o);

    for(i = 0; i < 12; i++){

        for(j = 0; j < 12; j++){

            scanf("%lf", &m[i][j]);

        }

    }

    l = 1;
    k = 11;

    for(i = 0; i < 5; i++){

        for(j = l; j < k; j++){

            tmp += m[i][j];

        }

        l++;
        k--;

    }

    if(o == 'S'){

        printf("%.1lf\n", tmp);

    } else if(o == 'M'){

        printf("%.1lf\n", tmp / 30.0);

    }


    return 0;
}

