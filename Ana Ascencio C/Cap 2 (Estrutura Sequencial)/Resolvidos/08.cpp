#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float dep, juros, rendi, total;

    std::cout<<"Informe o deposito:  ";
    std::cin>>dep;
    std::cout<<"Informe a taxa de juros(%):  ";
    std::cin>>juros;

    rendi = dep * (juros/100);
    total = dep + rendi;

    std::cout<<"Saldo Final = R$ "<<total;

    return 0;
}