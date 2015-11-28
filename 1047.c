#include <stdio.h>
  
int main() {
  
   int hi = 0, mi = 0, hf = 0, mf = 0, t1 = 0, t2 = 0;
 
    scanf("%d", &hi);
    scanf("%d", &mi);
    scanf("%d", &hf);
    scanf("%d", &mf);
 
    // CONVERTE PARA SEGUNDOS
    t1 = mi * 60;
    t2 = mf * 60;
    t1 += hi * 3600;
    t2 += hf * 3600;
 
    // SUBTRAI O TEMPO ENTRE OS VALORES EM SEGUNDOS
    if(t1 > t2 || t1 == t2){
 
        t1 = (86400 - t1) + t2;
 
    } else if(t2 > t1) {
 
        t1 = t2 - t1;
 
    }
 
    // CONVERTE PARA HORAS E MINUTOS NOVAMENTE
    t2 =  t1 / 3600;
    t1 -= t2 * 3600;
 
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t2, t1 / 60);
 
  
    return 0;
}
