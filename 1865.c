#include <stdio.h>
#include <string.h>

int main(){

    int c;

    scanf("%d", &c);

    while(c != 0){

        char nome[100];
        int n, i;

        scanf("%s %d", nome, &n);

        for(i = 0; i < strlen(nome); i++){

            nome[i] = tolower(nome[i]);

        }

        if(strcmp(nome, "thor") == 0){

            printf("Y\n");

        } else {

            printf("N\n");
        }


        c--;
    }


    return 0;
}
