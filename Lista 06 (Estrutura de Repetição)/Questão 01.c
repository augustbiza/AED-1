//POTENCIAÇÃO
#include<stdio.h>
#include<stdbool.h>

int main(){
    
    printf("CALCULE A POTENCIA DE UM NUMERO!\n");

    int expoente;
    float base;
    bool expoenteNegativo;
    bool indetermincao;

    do{
        printf("Informe o valor da base e do expoente:\n");
        scanf("%f%d", &base, &expoente);
        expoenteNegativo = expoente < 0;
        indetermincao = expoente == 0 && base == 0;
            if(expoenteNegativo){
                printf("Insira um expoente natural!\n\n");
            }
            if(indetermincao){
                printf("Indeterminacao Matematica!\n\n");
            }

    }while(expoenteNegativo || indetermincao);

    float potencia = 1;
        for(int c = 0; c < expoente; c++){
            potencia = potencia * base;
        }

    printf("Resultado = %.2f", potencia);

    return 0;
}