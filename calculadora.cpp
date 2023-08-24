#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num1, num2, r;
    char oper, op;
    do {
        printf ("Informe a equacao: ");
        scanf("%f %c %f", &num1, &oper, &num2);
        switch (oper) {
            case '+': r=num1+num2;
                    printf ("Soma: %.2f\n", r);
                    break;
            case '-': r=num1-num2;
                    printf ("Subtracao: %.2f\n", r);
                    break;
            case '*':
            case 'x': r=num1*num2;
                    printf("Multiplicacao: %.2f\n", r);
                    break;
            case '/': if (num2 != 0) {
                            r=num1/num2;
                            printf("Divisao: %.2f\n", r);}
                        else printf("divisao por zero\n");
            case '%': r= (int)num1 % (int)num2;
                        printf("Resultado: %.2f\n", r);
                        break;
        default: printf("Operador não existe\n");
        }
        printf("Deseja continuar? (s/n): ");
        fflush(stdin);
		scanf("%c", &op);
	} while (op != 'n' && op != 'N');
	return 0;
    }

