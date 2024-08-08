#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int idade;
    std::cout<<"Qual sua idade: ";
    std::cin>>idade;

    if(idade >= 5 && idade <= 7) std::cout<<"Infantil";
    else if(idade >= 8 && idade <= 10) std::cout<<"Juvenil";
    else if(idade >= 10 && idade <= 15) std::cout<<"Adolescente";
    else if(idade >= 16 && idade <= 30) std::cout<<"Adulto";
    else std::cout<<"Senior";
    std::cout<<std::endl;
    
    return 0;
}