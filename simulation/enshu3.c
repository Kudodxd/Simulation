#include <stdio.h>

int main(){
    int a=5, m=100, x[11];

    x[0] =3;
    printf("x[0] = %d\n",x[0]);
    for (int i=1;i<11;i++){
        x[i] = (a*x[i-1]+7)%m;
        printf("x[%d] = %d\n",i,x[i]);
    }
    return 0;
}