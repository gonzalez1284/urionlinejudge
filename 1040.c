#include <stdio.h>
  
int main() {
  
    double N1, N2, N3, N4, media;
 
    scanf("%lf", &N1);
    scanf("%lf", &N2);
    scanf("%lf", &N3);
    scanf("%lf", &N4);
 
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
 
    if(media >= 7.0){
 
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
 
    } else if(media >= 5.0 && media <= 6.9){
 
        double exame;
 
        scanf("%lf", &exame);
 
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", exame);
 
        media = (media + exame) / 2.0;
 
        if(media >= 5.0){
 
            printf("Aluno aprovado.\n");
 
        } else if(media <= 4.9){
 
            printf("Aluno reprovado.\n");
 
        }
 
        printf("Media final: %.1lf\n", media);
 
 
 
    } else if (media < 5.0) {
 
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
 
 
    }
  
    return 0;
}
