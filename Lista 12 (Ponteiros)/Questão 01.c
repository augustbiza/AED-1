//ALTERE O VALOR DE UMA VARIAVEL UTILIZANDO PONTEIROS
//int *ponteiro = &variavel;
//*ponteiro = valor
//ponteiro = endereço

#include<stdio.h>

void somaDez(float *ponteiro){//int *ponteiro = &x
    *ponteiro += 10;//somando 10 ao valor para qual o ponteiro aponta [ x + 10 = 17 ] 
}

void menosDez(float *ponteiro){
    *ponteiro -= 10;//subtraindo 10 ao valor para qual o ponteiro aponta [ x - 10 = -3 ]
}

void multDez(float *ponteiro){
    *ponteiro -= 10;//multiplicando 10 ao valor para qual o ponteiro aponta [ x * 10 = 70 ]
}

void divDez(float *ponteiro){
    *ponteiro /= 10;//dividindo 10 ao valor para qual o ponteiro aponta [ x / 10 = 0.7 ]
}

int main(){

    float x = 7;
    printf("Inicial = %.1f\n", x);

    somaDez(&x);//&x --> endereço de 'x' sendo levado como parâmetro
    printf("Soma = %.1f\n", x);//x = 7 + 10 = 17
    x = 7;//reseto o 'x' para 7

    menosDez(&x);
    printf("Subtracao = %.1f\n", x);// x = 7 - 10 = -3
    x = 7;//reseto o 'x' para 7

    multDez(&x);
    printf("Multiplicacao = %.1f\n", x);// x = 7 * 10 = 70
    x = 7;//reseto o 'x' para 7

    divDez(&x);
    printf("Divisao = %.1f\n", x);// x = 7 / 10 = 0.70
    x = 7;//reseto o 'x' para 7(opicional = ultima linha)

    return 0;
}