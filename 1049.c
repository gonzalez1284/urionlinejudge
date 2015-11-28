#include <stdio.h>
  
int main() {
  
    char opt1[20], opt2[20], opt3[20];
 
    scanf("%s", opt1);
    scanf("%s", opt2);
    scanf("%s", opt3);
 
    // VERTEBRADO
    if(opt1[0] == 'v'){
 
        // AVE
        if(opt2[0] == 'a'){
 
            // CARNIVERO
            if(opt3[0] == 'c'){
 
                printf("aguia\n");
 
            // ONIVORO
            } else if(opt3[0] == 'o'){
 
                printf("pomba\n");
 
            }
 
        // MAMIFERO
        } else if(opt2[0] == 'm'){
 
            // ONIVORO
            if(opt3[0] == 'o'){
 
                printf("homem\n");
 
            // HERBIVORO
            } else if(opt3[0] == 'h'){
 
                printf("vaca\n");
 
            }
 
 
        }
 
 
    // INVERTEBRADO
    } else if(opt1[0] == 'i'){
 
        // INSETO
        if(opt2[0] == 'i'){
 
            // HEMATOFAGO
            if(opt3[2] == 'm'){
 
                printf("pulga\n");
 
            // HERBIVORO
            } else if(opt3[2] == 'r'){
 
                printf("lagarta\n");
            }
 
        // ANELIDEO
        } else if(opt2[0] == 'a'){
 
            // HEMATOFAGO
            if(opt3[0] == 'h'){
 
                printf("sanguessuga\n");
 
            // ONIVORO
            } else if(opt3[0] == 'o'){
 
                printf("minhoca\n");
 
            }
 
        }
 
 
 
    }
  
    return 0;
}
