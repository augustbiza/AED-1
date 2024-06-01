//PERÍMETRO DE QUADRADO UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("PERIMETRO DO QUADRADO!\n");
}

float leiaLado(){
    float lado;
    do{
        printf("Informe a medida do lado: ");
        scanf("%f", &lado);
            if(lado <= 0){
                printf("Medida Invalida1\n\n");
            }
    }while(lado <= 0);

    return lado;
}

float calculePerimetro(float lado){
    float perimetro = 4 * lado;

    return perimetro;
}

int main(){

    titulo();

    float lado = leiaLado();
    float perimetro = calculePerimetro(lado);

    printf("Perimetro = %.2f", perimetro);

    return 0;
}