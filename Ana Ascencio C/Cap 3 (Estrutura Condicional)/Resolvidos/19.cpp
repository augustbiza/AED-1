#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    system("cls");    

    float peso, alt;
    std::cout<<"Informe seu peso(kg):  ";
    std::cin>>peso;
    std::cout<<"Informe sua altura(m):  ";
    std::cin>>alt;

    bool pesoValido = peso >= 3, altVAlida = alt >= 0.5;

    if(pesoValido && altVAlida) {
        if(peso < 60) {
            if(alt < 1.2) std::cout<<"A";
            else if(alt >= 1.2 && alt <= 1.7) std::cout<<"B";
            else std::cout<<"C";
        }
        else if(peso >= 60 && peso <= 90) {
            if(alt < 1.2) std::cout<<"D";
            else if(alt >= 1.2 && alt <= 1.7) std::cout<<"E";
            else std::cout<<"F";
        }
        else {
            if(alt < 1.2) std::cout<<"G";
            else if(alt >= 1.2 && alt <= 1.7) std::cout<<"H";
            else std::cout<<"I";
        }
    }
    else if(pesoValido) std::cout<<"Altura invalida";
    else if(altVAlida) std::cout<<"Peso invalido";
    else std::cout<<"Peso e Altura invalidos";

    std::cout<<std::endl;

    return 0;
}