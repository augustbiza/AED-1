//CALCULAR O NÚMERO DE DIAS VIVIDOS PELA IDADE(ANOS)
#include<stdio.h>
#include<stdbool.h>

int main(){
    int idade;
    bool idadeInvalida;

    do{
        idadeInvalida = false;
        printf("Informe sua idade: ");
        scanf("%d", &idade);
            if(idade < 0 || idade > 150){
                idadeInvalida = true;
                printf("Idade Invalida!\n\n");
            }
    }while(idadeInvalida);

    float diasVividos = idade * 365.25;
    printf("Dias vividos = %.0f", diasVividos);
}