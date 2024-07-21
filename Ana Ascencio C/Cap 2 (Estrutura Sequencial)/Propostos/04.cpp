#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float nota1, nota2;

    std::cout<<"Informe as duas notas:"<<std::endl;
    std::cin>>nota1;
    std::cin>>nota2;

    float mediaP = ((nota1*2) + (nota2*3)) / 5;

    std::cout<<"Media = "<<mediaP<<std::endl;

    return 0;
}