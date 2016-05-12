#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char a[10];
    unsigned long long x;

    scanf("%llu", &x);

    sprintf(a, "%llu", x);

    printf("%s\n", strrev(a));

    return 0;

}
