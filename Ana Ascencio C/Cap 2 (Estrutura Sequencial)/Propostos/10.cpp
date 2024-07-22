#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float area, lado;

    std::cout<<"Qual a medida do lado do quadrado? ";
    std::cin>>lado;

    area = lado * lado;

    std::cout<<"Area = "<<area<<std::endl;

    return 0;
}