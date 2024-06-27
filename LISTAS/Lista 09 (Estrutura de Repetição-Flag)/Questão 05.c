//Aumento de salário de acordo com o salário base
#include <stdio.h>

int main(){

    float salario = -1, novoSalario;
    int qtSalarios = 0;
    while(salario != 0){//0 - encerra
        do{//rejeitar salarios negativos
            printf("Informe o salario(0-sair):  ");
            scanf("%f", &salario);
        }while(salario < 0);

        if(salario > 0){//só vai fazer o calculo se o salario digitado for != 0

            qtSalarios++;

            if (salario < 1000){
                novoSalario = salario * 1.1;
            }
            else if(salario >= 1000 && salario <= 2000){
                novoSalario = salario * 1.08;
            }
            else{
                novoSalario = salario * 1.07;
            }

            printf("Novo salario = %.2f\n\n", novoSalario);
        }//fim calculos    
    }//fim flag

    if(qtSalarios == 0){
            printf("Nenhum salario foi inserido!\n");
    } 

    return 0;
}