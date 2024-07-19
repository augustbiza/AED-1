#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float racao, gato1, gato2;
    int dias;

    std::cout<<"Informe a quantidade do saco de racao(kg): ";
    std::cin>>racao;

    std::cout<<"Quantidade de racao diaria da Akari(g):  ";
    std::cin>>gato1;
    gato1 /= 1000;

    std::cout<<"Quantidade de racao diaria do Yuna(g):  ";
    std::cin>>gato2;
    gato2 /= 1000;

    std::cout<<"Quantidade de dias:  ";
    std::cin>>dias;

    racao -= (gato1 +gato2)*dias;

    std::cout<<"Apos "<<dias<<" dias tem "<<racao<<"kg de racao"<<std::endl;

    return 0;
}