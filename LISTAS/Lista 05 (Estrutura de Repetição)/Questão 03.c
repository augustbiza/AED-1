//CALCULADORA SIMPLES COM FLAG = '0' ENCERRA
#include<stdio.h>

int main(){

    printf("CALCULADORA SIMPLES!\n");

    int op;

    while(op != 0){//flag = 0 = sair do programa
        
        float num1, num2;
        printf("Informe dois numeros:  ");
        scanf("%f%f", &num1, &num2);

        printf("Operacoes disponiveis:\n1(+)\n2(-)\n3(*)\n4(/)\n0(sair)\nSelecione uma opcao:  ");
        scanf("%d", &op);

        

            if(num2 == 0 && op == 4){
                printf("Operacao Invalida!\n\n");
            }
            else{
                float result;

                switch(op){
                    case 1: result = num1 + num2;
                        break;
                    case 2: result = num1 - num2;
                        break;
                    case 3: result = num1 * num2;
                        break;
                    case 4: result = num1 / num2;
                }//fim switch
    
                printf("Resultado = %.2f", result);
            }//fim else
    }//fim flag

    return 0;
}