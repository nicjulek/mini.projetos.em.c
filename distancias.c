#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Euclidiana (float [], float [], int);
float Manhatan(float[], float [], int);

int main (){
    int n, i;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    float v1[n], v2[n];

    printf("Insira os valores do primeiro vetor: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &v1[i]);
    }

    printf("Insira os valores do segundo vetor: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &v2[i]);
    }

//Mostrar os valores

    float de = Euclidiana(v1, v2, n);
    printf("Euclidiana: %.2f\n", de);

    float dm = Manhatan(v1, v2, n);
    printf("Manhatan: %.2f\n", dm);

    return 0;
}

float Euclidiana(float vetor1[], float vetor2[], int n){
    float soma = 0;
    int i;

//Calculo da distancia euclidiana
//pow = elevado a determinado valor

    for (i = 0; i < n; i++) {
        soma += pow(vetor1[i] - vetor2[i], 2);
    }
    return sqrt(soma);
}

float Manhatan(float vetor1[], float vetor2[], int n){
    float soma = 0;
    int i;

//Calculo da distancia manhatan
//fabs = coloca em modulo

    for(i = 0; i < n; i++) {
        soma += (vetor1[i] - vetor2[i]);
    }
    return fabs(soma);
}
