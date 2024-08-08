#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int senhaDigitada, senha = 4531;
    std::cout<<"Senha: ";
    std::cin>>senhaDigitada;

    if(senhaDigitada != senha) std::cout<<"Senha incorreta";
    else std::cout<<"Acesso permitido";

    return 0;
}