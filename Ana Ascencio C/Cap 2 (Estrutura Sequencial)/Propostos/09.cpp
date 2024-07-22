#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float area, baseMaior, baseMenor, altura;

    std::cout<<"Base Maior?  ";
    std::cin>>baseMaior;
    std::cout<<"Base Menor?  ";
    std::cin>>baseMenor;
    std::cout<<"Altura?  ";
    std::cin>>altura;

    area = ((baseMaior + baseMenor) * altura)/2;

    std::cout<<"Area = "<<area<<std::endl;

    return 0;
}