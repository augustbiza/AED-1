//amplitude salarial e percentual de salários mínimos com flag(0-encerra)
#include <stdio.h>

int main(){

    float salMin, sal;
    int maiorSal = 0, menorSal = 10000, qtSal = 0, qtSalMin = 0;
    
    do{// rejeitar salMin negativo
        printf("Qual o valor do salario minimo:  ");
        scanf("%f", &salMin);
            if(salMin <= 0){//mensagem erro
                printf("Salario Invalido!\n\n");
            }
    }while(salMin <= 0);

    while(sal != 0){//flag '0' encerra
        do{//rejeitar salario negativo
            printf("Informe o salario:  ");
            scanf("%f", &sal);

                if(sal < 0){//mensagem erro
                printf("Salario Invalido!\n\n");
                }

                if(sal < menorSal){
                    menorSal = sal;
                }

                if(sal > maiorSal){
                    maiorSal = sal;
                }

                if(sal == salMin){
                    qtSalMin++;
                }
        }while(sal < 0);

        if(sal != 0){
            qtSal++;
        }
    }//fim flag

    float percentSalMin = (float)qtSalMin / qtSal * 100;
    float amplitudeSal = maiorSal - menorSal;
    printf("Amplitude salarial = %.1f\nPercentual de Salarios Minimos = %.1f", amplitudeSal, percentSalMin);
}