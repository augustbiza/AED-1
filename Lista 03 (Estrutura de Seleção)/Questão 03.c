//INFORME O TIPO DO TRIÂNGULO ATRAVÉS DA MADIDA DOS LADOS
#include<stdio.h>
#include<stdbool.h>
int main(){

    printf("DESCUBRA O TIPO DO TRIANGULO!\n");
    float lado1, lado2, lado3;
    bool desigualdadeTriangular = true;
    bool ladoNegativo = true;

    do{
        printf("Informe a medida dos tres lados: ");
        scanf("%f%f%f", &lado1, &lado2, &lado3);
        desigualdadeTriangular = lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado1 + lado2;
        ladoNegativo = lado1 <= 0 || lado2 <= 0 || lado3 <= 0;
            if(desigualdadeTriangular){
                printf("Os lados nao formam um triangulo!\n\n");
            }
            if(ladoNegativo){
                printf("Medidas dos lados nao podem ser numeros negativos!\n\n");
            }

    }while(desigualdadeTriangular || ladoNegativo);

    bool equilatero = lado1 == lado2 && lado1 == lado3;
    bool isosceles = lado1 == lado2 || lado1 == lado3 || lado2 == lado3;

    if(equilatero){
        printf("Triangulo Equilatero!\n");
    }
    else if(isosceles){
        printf("Triangulo Isosceles!\n");
    }
    else{
        printf("Triangulo Escaleno!\n");
    }

    return 0;
}//fim main