#include <stdio.h>
  
int main() {
  
    int N;
    int time[] = {0,0,0};
 
    scanf("%d", &N);
 
    time[0] = N / 3600;
    time[1] = (N - (3600 * time[0])) / 60;
    time[2] = (N - (3600 * time[0])) - 60 * time[1];
 
    printf("%d:%d:%d\n", time[0], time[1], time[2]);
  
    return 0;
}
