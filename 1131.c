#include <stdio.h>
  
int main() {
  
    // 0 - inter
    // 1 - gremio
    int placar[2] = {0,0};
    int inter = 0, gremio = 0, empate = 0, grenais = 0, opt = 1;
 
    while(opt == 1){
 
        scanf("%d", &placar[0]);
        scanf("%d", &placar[1]);
 
 
        if(placar[0] > placar[1]){
 
            inter++;
 
 
        } else if(placar[0] < placar[1]){
 
            gremio++;
 
        } else {
 
            empate++;
 
        }
 
        grenais++;
 
 
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opt);
 
    }
 
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
 
    if(inter > gremio){
 
        printf("Inter venceu mais\n" );
 
    } else if( inter < gremio  ){
 
        printf("Gremio venceu mais\n");
 
    } else {
 
        printf("Nao houve vencedor\n");
    }
  
    return 0;
}
