#include <stdio.h>

int main(){
    int a=3, m=7, x[3];

    x[0] = 1;
    
    x[1] = (a*x[0])%m;
    printf("%d\n",x[1]);
    
    x[2] = (a*x[1])%m;
    printf("%d\n",x[2]);
    return 0;
}