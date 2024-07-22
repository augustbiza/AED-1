#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float diagMaior, diagMenor, area;

    std::cout<<"Informe os valores das diagonais do losango:  ";
    std::cin>>diagMaior;
    std::cin>>diagMenor;

    area = (diagMaior * diagMenor) / 2;

    std::cout<<"Area = "<<area<<std::endl;

    return 0;
}