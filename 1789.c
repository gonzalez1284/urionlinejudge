#include <stdio.h>

int main(){

    int l;

    while(scanf("%d", &l) != EOF){

        int i, lesmas[l], lvl = 0;

        for(i = 0; i < l; i++){

            scanf("%d", &lesmas[i]);

            if(lesmas[i] > lvl){

                lvl = lesmas[i];

            }

        }

        if(lvl < 10){

            printf("%d\n", 1);

        } else if (lvl >= 10 && lvl < 20 ){

            printf("%d\n", 2);

        }  else {

            printf("%d\n", 3);

        }

    }

    return 0;
}
