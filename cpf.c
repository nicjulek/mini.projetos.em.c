#include <stdio.h>
#include <stdlib.h>
#define N 11

int verificaCPF(int cpf[]);

int main(){
    int num[N], aux;
    printf("Digite seu cpf: ");

    for (int i = 0; i < N; i++) {
        scanf("%1d", &aux);
        num[i] = aux;
    }


    if(verificaCPF(num)){
        printf("O cpf e valido!!");}
        else {
            printf("O cpf nao e valido!!");
        }
    return 0;
}

//Verificar se um cpf � v�lido ou n�o.

int verificaCPF(int cpf[]){
    int soma1 = 0, soma2= 0, i=0;

//Calculo do 10 digito

    for(i=0; i<9; i++){
        soma1 += cpf[i] * (i+1);
        }
    int valor1 = (soma1 * 10) % 11;
    if (valor1 == 10){
        valor1 = 0;}

//Calculo do 11 digito

    for(i=0; i<10; i++){
        soma2 += cpf[i] * (N - i);
        }
    int valor2 = (soma2 * 10) % 11;
    if (valor2 == 10){
        valor2 = 0;}

//Verifica se � v�lido

    if (cpf[N-2] == valor1 && cpf[N-1] == valor2){
        return 1;}
        else {
            return 0;}
}
