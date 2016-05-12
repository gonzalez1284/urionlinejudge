#include <stdio.h>

int main(){

    int p, i;
    double total;

    scanf("%d", &p);

    int x[p][2];

    for(i = 0; i < p; i++){

       scanf("%d %d", &x[i][0], &x[i][1]);
    }

    total = 0;

    for(i = 0; i < p; i++){

        switch(x[i][0]){

            case 1001:

                total += x[i][1] * 1.50;
                break;

            case 1002:

                total += x[i][1] * 2.50;
                break;

            case 1003:

                total += x[i][1] * 3.50;
                break;

            case 1004:

                total += x[i][1] * 4.50;
                break;

            case 1005:

                total +=  x[i][1] * 5.50;
                break;

            default:
                break;

        }

    }

    printf("%.2lf\n", total);


    return 0;
}
