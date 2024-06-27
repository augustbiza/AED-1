//ÁREA DO TRIÂNGULO UTILIZANDO FUNÇÃO
#include<stdio.h>

void apresentacao(){
    printf("CALCULE A AREA DO TRIANGULO!\n");
}//FUNÇÃO 'VOID' NÃO RETORNA VALOR PARA A MAIN

float leiaNumero(){
    float lado;
    do{
        printf("Informe a medida: ");
        scanf("%f", &lado);
            if(lado <= 0){
                printf("Insira medidas positivas!\n\n");
            }
    }while(lado <= 0);
    
    return lado;// FIM 'LEIANUMERO' = RETORNA VALOR DE 'LADO' PARA MAIN
}

float calculeAreaTriangulo(float base, float altura){
    int area = base * altura / 2;
    return area;// FIM 'CALCULEAREATRIANGULO' = RETORNA VALOR DE 'AREA' PARA MAIN
}

int main(){//INICIO MAIN

    apresentacao();

    float base = leiaNumero();
    float altura = leiaNumero();

    float area = calculeAreaTriangulo(base, altura);

    printf("Area = %.2f", area);

    return 0;
}