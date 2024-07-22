#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float alfa, beta, teta;

    std::cout<<"Informe a media do peimeiro angulo:  ";
    std::cin>>alfa;
    std::cout<<"Informe a media do segundo angulo:  ";
    std::cin>>beta;

    teta = 180 - (alfa + beta);

    std::cout<<"Terceiro angulo tem "<<teta<<" graus"<<std::endl;

    return 0;
}