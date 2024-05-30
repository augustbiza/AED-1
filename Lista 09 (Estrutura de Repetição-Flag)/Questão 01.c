//Media de valores lidos (flag)
#include <stdio.h>

int main(){

    float num, soma = 0;
    int qtNum = 0;
    
    while (num != 0)
    {
        printf("Insira um numero(0-encerra):  ");
        scanf("%f", &num);

            if(num != 0){
                qtNum++;
                soma += num;
            }
    }//fim flag

    if(qtNum > 0){
        float media = soma / qtNum;
        printf("Media = %.2f\n", media);
    }
    else{
        printf("Nenhum numero foi inserido!\n");
    }

    return 0;
}