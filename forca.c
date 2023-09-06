#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define NUMPALAVRAS 20

char *bancodepalavras[NUMPALAVRAS]={"suco","banana","desenho","farinha","dinheiro"};

int main(){
    int i, j, acertos, tentativas;
    srand(time(NULL));
    int aleatorio = rand() % NUMPALAVRAS;
    char *palavra = bancodepalavras[aleatorio];
    int tampalavra = strlen(palavra);
    char letrasdigitadas[26] = {' '};
    char letra;
    char palavraoculta[tampalavra + 1];

    printf("FORCA!\n");

    for (i=0; i<tampalavra; i++){
            palavraoculta[i]='_';
    }
    palavraoculta[tampalavra]='\0';

    acertos=0;
    tentativas=6;

    while (tentativas > 0 && acertos < tampalavra){
        printf("Palavra: %s\n", palavraoculta);
        printf("Letras ja digitadas: %s\n", letrasdigitadas);
        printf("Tentativas: %d\n", tentativas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        int letradigitada = 0;
        for (j = 0; j < strlen(letrasdigitadas); j++) {
            if (letrasdigitadas[j] == letra) {
                letradigitada = 1;
                break;
            }
        }
        if (letradigitada){
            printf("\nVoce ja digitou essa letra.\n");
            continue;
        }

        letrasdigitadas[strlen(letrasdigitadas)] = letra;
        letrasdigitadas[strlen(letrasdigitadas)] = ' ';

        int letraencontrada = 0;
        for (j = 0; j < tampalavra; j++) {
            if (palavra[j] == letra) {
                palavraoculta[j] = letra;
                acertos++;
                letraencontrada = 1;
            }
        }
        if (letraencontrada){
            printf("\nVoce encontrou uma letra!\n");}
            else{
                printf("\nVoce nao encontrou uma letra!\n");
                tentativas--;}
        if (acertos == tampalavra){
            printf("\nParabens! Voce encontrou a palavra!\n");}
        if (tentativas == 0){
            printf("\nParabens! Voce perdeu!\n");
        }
    }
    return 0;
}
