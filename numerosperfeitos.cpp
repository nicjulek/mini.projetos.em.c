
 #include <stdlib.h>
 #include <stdio.h>
 #include <locale.h>
 #include <math.h>


 int main () {
    int Ni, Nf, i, j, soma;
    setlocale(LC_ALL, "Portuguese");
    printf ("Informe o primeiro e o último valor do intervalo:");
    scanf("%d %d", &Ni, &Nf);
    while(Ni<0 || Nf<0 || Ni>Nf){
            if(Ni<0 || Nf<0){
                printf("O primeiro e o último termo devem ser positivos\n");
                printf("Informe o primeiro e o último número do intervalo: ");
                scanf("%d %d", &Ni, &Nf);
            }
            else if(Ni>Nf){
                printf("O primeiro termo deve ser menor ou igual ao último\n");
                printf("Informe o primeiro e o último número do intervalo: ");
                scanf("%d %d", &Ni, &Nf);
            }
        }

        i= Ni;
        while (i <= Nf) {
            soma= 0;
            j = 1;
            while (j <=i/2) {
                if (i % j == 0 ) {
                soma +=j;
                }
            j++;
            }
            if (soma == i ) {
                printf ("Resultado: %d\n", i);
            }
            i++;
        }
        system ("pause");
        return 0;
    }
