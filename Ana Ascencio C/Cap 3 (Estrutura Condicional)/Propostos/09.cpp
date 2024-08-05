#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float saldoM, credito;
    std::cout<<"Informe o saldo medio(R$): ";
    std::cin>>saldoM;

    if(saldoM > 400) credito = saldoM * 0.3;
    else if(saldoM <= 400 && saldoM > 300) credito = saldoM * 0.25;
    else if(saldoM <= 300 && saldoM > 200) credito = saldoM * 0.2;
    else credito = saldoM * 0.1;

    std::cout<<"Credito = R$"<<credito<<std::endl;

    return 0;
}