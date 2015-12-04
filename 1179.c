/*
 * 1179 - Preenchimento de Vetor IV
 *
 * Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares.
 * Só que o tamanho de cada um dos dois vetores é de 5 posições.
 * Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para
 * os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos
 * dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.
 *
 */
#include <stdio.h>

int main(){

    int i = 0, j = 0, k = 0, n = 0;
    int vp[5] = {0,0,0,0,0};
    int vi[5] = {0,0,0,0,0};

    while(i < 15){

        scanf("%d", &n);

        if(n % 2 == 0){

            vp[j] = n;
            j++;

        } else {

            vi[k] = n;
            k++;
        }

        i++;

        if(j == 5){

            for(j = 0; j < 5; j++){

                printf("par[%d] = %d\n", j, vp[j]);
                vp[j] = 0;

            }

            j = 0;

        }

        if(k == 5){

            for(k = 0; k < 5; k++){

                printf("impar[%d] = %d\n", k, vi[k]);
                vi[k] = 0;

            }


            k = 0;
        }

    }

    // IMPRIME A SOBRA DOS VETORES
    if(k > 0){

        for(i = 0; i < k; i++){

                printf("impar[%d] = %d\n", i, vi[i]);

        }

    }

    if(j > 0){

        for(i = 0; i < j; i++){

            printf("par[%d] = %d\n", i, vp[i]);

        }

    }

    return 0;

}
