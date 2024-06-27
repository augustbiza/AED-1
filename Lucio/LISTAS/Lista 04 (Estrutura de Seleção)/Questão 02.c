//CONSTRUA UMA CALCULADORA SIMPLES
#include<stdio.h>
#include<stdbool.h>

int main(){

    printf("CALCULADORA SIMPLES!\n");
    char operacao;
    bool operacaoInvalida;

        do{
            printf("Qual operacao deseja fazer?\nadicao(+)\nsubtracao(-)\nmultiplicacao(*)\ndivisao(/)\n");
            scanf(" %c", &operacao);
            operacaoInvalida = operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/';
                if(operacaoInvalida){
                    printf("Operacao Invalida!\n\n");
                }
        }while(operacaoInvalida);//fim do-while


    float numero1, numero2, resultado;
    printf("Informe o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%f", &numero2);

    switch(operacao){
        case '+': resultado = numero1 + numero2;
            break;

        case '-': resultado = numero1 - numero2;
            break;

        case '*': resultado = numero1 * numero2;
            break;

        case '/': resultado = numero1 / numero2;
            break;

        default: printf("Operador Invalido\n\n");
    }//fim switch

    printf("%.2f %c %.2f = %.2f", numero1, operacao, numero2, resultado);


    return 0;
}//fim main