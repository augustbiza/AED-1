#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");

    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    std::cout<<"Informe a nota e o peso da prova 1:  ";
    std::cin>>nota1;
    std::cin>>peso1;
    std::cout<<"Informe a nota e o peso da prova 2:  ";
    std::cin>>nota2;
    std::cin>>peso2;
    std::cout<<"Informe a nota e o peso da prova 3:  ";
    std::cin>>nota3;
    std::cin>>peso3;

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    std::cout<<"Media = "<<media<<std::endl;

    return 0;
}