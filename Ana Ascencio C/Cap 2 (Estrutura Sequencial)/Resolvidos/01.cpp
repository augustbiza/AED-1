#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");

    //variaveis
    int num1, num2, num3, num4, soma;

    //guardar valores nas variaveis
    std::cout<<"Insira quatro numeros inteiros"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;
    std::cin>>num3;
    std::cin>>num4;

    //mostrar os valores
    //std::cout<<num1<<", "<<num2<<", "<<num3<<", "<<num4<<std::endl;

    soma = num1 + num2 + num3 + num4;

    std::cout<<"Soma = "<<soma<<std::endl;    

    return 0;
}