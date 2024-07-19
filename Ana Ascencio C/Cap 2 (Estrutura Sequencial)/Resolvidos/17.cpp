#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, cheque1, cheque2;

    std::cout<<"Qual seu saldo:  ";
    std::cin>>sal;

    std::cout<<"Informe o valor do primeiro saque:  ";
    std::cin>>cheque1;
    sal -= (cheque1 + sal*0.0038);

    std::cout<<"Informe o valor do segundo saque:  ";
    std::cin>>cheque2;
    sal -= (cheque2 + sal*0.0038);

    std::cout<<"Saldo final = "<<sal<<std::endl;

    return 0;
}