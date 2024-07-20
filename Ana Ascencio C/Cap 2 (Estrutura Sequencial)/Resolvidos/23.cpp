#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float numero, francionaria;
    int inteira;
    std::cout<<"Informe um numero 'quebrado':  ";
    std::cin>>numero;

    inteira = numero;
    //inteira = (int)numero --> casting nao foi necessario não sei o motivo
    francionaria = numero - inteira;

    std::cout<<"Numero: "<<numero<<std::endl;
    std::cout<<"Parte inteira: "<<inteira<<std::endl;
    std::cout<<"Parte fracionaria: "<<francionaria<<std::endl;
    
    return 0;
}