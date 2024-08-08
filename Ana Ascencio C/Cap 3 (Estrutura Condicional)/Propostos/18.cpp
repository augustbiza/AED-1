#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int idade;
    std::cout<<"Informe sua idade: ";
    std::cin>>idade;

    if(idade < 18) std::cout<<"Menor de idade";
    else std::cout<<"Maior de idade";
    std::cout<<std::endl;

    return 0;
}