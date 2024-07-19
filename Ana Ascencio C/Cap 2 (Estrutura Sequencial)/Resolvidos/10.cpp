#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float raio, area;

    std::cout<<"Tamanho do raio:  ";
    std::cin>>raio;

    area = raio * raio * 3.14;

    std::cout<<"Area = "<<area<<std::endl;

    return 0;
}