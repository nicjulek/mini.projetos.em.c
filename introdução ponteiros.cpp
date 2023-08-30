#include <stdio.h>

//função calculando a media de dois valores

//prototipos de função - pode calcular em qualquer ordem
float Media(float, float);
void Troca(float *, float *);
void Ordena(int[], int);
void Mostra(int[], int);
int Soma(int[], int);

float Media(float A, float B){
float C;

C=(A+B)/2;
return C;
}

//troca o valor de 2 variaveis
//exemplo passagem parametros por referencia (uso de ponteiros)
void TROCA ( float*X, float*Y){
float AUX;
AUX = *X;
*X = *Y;
*Y = AUX;
}

int main(){
    float X, Y, Z;
    int Vet[]={4,0,3,1};
    printf("informe os valores: ");
    scanf("%f %f", &X, &Y);
    fflush;

    Z = Media(X,Y) * 2;

    printf("Media e: %.2f\n", Media(X,Y));
    printf("Z: %.2f\n",Z);

    TROCA(&X,&Y);
    printf("X = %.2f ", X);
    printf("Y = %.2f\n", Y);

    printf("Soma dos elementos do vetor: %d\n", Soma(Vet, 4));
    Ordena(Vet, 4);
    Mostra(Vet, 4);

return 0;
}

//Função que calcula o somatorio do vetor

int Soma(int V[], int N){
    int i, S=0;
    for(i=0; i<N; i++){
    S=S+V[i];
    }
    return S;
}

//Procedimento que ordena vetor

void Ordena(int V[], int N){
    int aux, i, j;
    for(i=0; i<N-1; i++)
        for(j=i+1; j<N; j++)
            if(V[i]>V[j]){
            aux=V[i];
            V[i]=V[j];
            V[j]=aux;
            }
}

//Procedimento que mostra um vetor

void Mostra(int V[], int N){
    int i;
    printf("\nElementos do vetor\n");
    for(i=0; i<N; i++) printf("%d ", V[i]);
}

