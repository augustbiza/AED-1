#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float dividendo;
    int divisor;

    std::cout<<"Informe o dividendo:  ";
    std::cin>> dividendo;
    std::cout<<"Informe o divisor:  ";
    std::cin>> divisor;

    float result = dividendo/ divisor;

    std::cout<<"Resposta: "<<result<<std::endl;

    return 0;
}
//divisoes por 0 não foi detalhada pois nesse capítulo ainda nao entrou "estrutura de condição if-else"