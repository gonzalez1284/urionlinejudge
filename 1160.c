#include <stdio.h>

int main(){

    int pa, pb, t, a;
    double g1,g2;

    scanf("%d",&t);

    while(t != 0){

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        a = 0;

        while(pa <= pb){

            pa += g1 / 100 * pa;
            pb += g2 / 100 * pb;

            a++;

            if(a > 100){

                break;

            }
        }

        if(a > 100){

            printf("Mais de 1 seculo.\n");

        } else {

            printf("%d anos.\n", a);

        }


        t--;
    }


    return 0;
}
