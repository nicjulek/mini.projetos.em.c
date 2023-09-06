#include <stdio.h>

// protótipo de função

int fat(int);
int fibo(int);

int fibo(int N) {
    int Atual, Ant1, Ant2, i=1;
    if (N<=0) return -1;
    Atual=1;
    Ant1=0;
    Ant2=1;
    while (i<N) {
        Atual=Ant1+Ant2;
        Ant1=Ant2;
        Ant2=Atual;
        i++;
    }
    return Atual;
}

int main() {
    int Num, res;
    printf("Informe Num:");
    scanf("%d", &Num);
    res=fat(Num);
    if (res==-1) printf("Erro ao calcular fatorail\n");
    else printf("Fatorial de %d = %d\n", Num, res);

    res=fibo(Num);
    if (res==-1) printf("Erro ao calcular fibonacci\n");
    else printf("Elemento %d de fibo = %d\n", Num, res);
    return 0;
}

int fat(int N) {
    int R, I;
    if (N<0) return -1;
    R=1;
    I=2;
    while (I<=N) {
        R=R*I;
        I++;
    }
    return R;
}
