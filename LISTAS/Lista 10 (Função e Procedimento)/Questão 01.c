//SOMA DE DOIS NÚMEROS UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("SOMA DE DOIS NUMEROS!\n");
}

int leiaNumero(){//
    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    return numero;//RETORNA O VALOR DE 'NUMERO' PARA A MAIN
}

int somaNumeros(int a, int b){//int A = NUMERO 1  /  int B = NUMERO 2
    int soma = a + b;
    return soma;//RETORNA O VALOR DE 'SOMA' PARA MAIN
}

int main(){//INICIO MAIN

    titulo();

    int numero1 = leiaNumero();//numero1 terá o valor que retornara da função 'leiaNumero'
    int numero2 = leiaNumero();//numero2 terá o valor que retornara da função 'leiaNumero'

    int resultado = somaNumeros(numero1, numero2);
        //'NUMERO1' E 'NUMERO2' DA MAIN SÃO LEVADOS PARA A FUNÇÃO 'SOMANUMEROS' FORA DA MAIN RESPECTIVAMENTE

    printf("%d + %d = %d", numero1, numero2, resultado);

    return 0;
}