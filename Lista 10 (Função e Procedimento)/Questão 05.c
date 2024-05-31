//INFORME O TIPO DE TRIÂNGULO
#include<stdio.h>
#include<stdbool.h>

void titulo(){
    printf("DESCUBRA O TIPO DO TRIANGULO!\n");
}

int leiaLado(){

    int lado;
    do{//rejeitar valores negativos de 'lado'
        printf("Informe a medida do lado: ");
        scanf("%i", &lado);
            if(lado <= 0){
                printf("Informe medidas positivas!\n\n");
            }
    }while(lado <= 0);

    return lado;// valor de 'lado' retorna para main
}

bool desigualdadeTriangular(int lado1, int lado2, int lado3){

    bool desigualdadeTriangular;
    if((lado1 + lado2 < lado3) || (lado1 + lado3 < lado2) || (lado2 + lado3 < lado1)){
        desigualdadeTriangular = false;
    }

    return desigualdadeTriangular;// retorna verdadeiro ou falso
}

int tipoTriangulo(int lado1, int lado2, int lado3){
    int tipo;
        if(lado1 == lado2 && lado1 == lado3){
            tipo = 1;//Equilátero
        }
        else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            tipo = 2;//Isósceles
        }
        else{
            tipo = 3;//Escaleno
        }
    
    return tipo;
}

void nomeTriangulo(int tipo){//void pois não retorna valor
    if(tipo == 1){
        printf("Triangulo Equilatero\n");
    }
    else if(tipo == 2){
        printf("Triangulo Isosceles\n");
    }
    else{
        printf("Triangulo Escaleno\n");
    }
}

int main(){//INICIO MAIN

    titulo();

    int lado1 = leiaLado();
    int lado2 = leiaLado();
    int lado3 = leiaLado();

    if(desigualdadeTriangular(lado1, lado2, lado3)){//chama a função 'desigualdadeTriangular' // leva os lados como parâmetro
        //se a condição for verdadeira faça o calculo do tipo de triangulo
        int tipo = tipoTriangulo(lado1, lado2, lado3);//chama a função 'tipoTriangulo' // leva os lados como parâmetro
        
        nomeTriangulo(tipo);
    }//fim 'desigualdadeTriangular'

    else{//se a condição for falsa
        printf("Lados nao formam triangulo!\n\n");
    }

    return 0;
}