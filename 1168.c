#include <stdio.h>
#include <string.h>

int main(){

    int n;

    scanf("%d ", &n);

    while(n != 0){

        int i, leds = 0;

        char vetor[101];
        gets( vetor );

        for(i = 0; i < strlen(vetor); i++){

            switch(vetor[i]){

                case '0':

                    leds +=6;
                    break;

                case '1':

                    leds += 2;
                    break;

                case '2':

                    leds += 5;
                    break;

                case '3':

                    leds += 5;
                    break;

                case '4':

                    leds += 4;
                    break;

                case '5':

                    leds += 5;
                    break;

                case '6':

                    leds += 6;
                    break;

                case '7':

                    leds += 3;
                    break;

                case '8':

                    leds += 7;
                    break;

                case '9':

                    leds += 6;
                    break;

                default:
                    break;


            }

        }

        printf("%d leds\n", leds);
        n--;
    }


    return 0;
}
