#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float pes, polegadas, jardas, milhas;

    std::cout<<"Qual a distancia em 'pes':  ";
    std::cin>>pes;

    std::cout<<"Pes = "<<pes<<std::endl;

    polegadas = pes * 12;
    std::cout<<"Polegas = "<<polegadas<<std::endl;

    jardas = pes * 3;
    std::cout<<"Jardas = "<<jardas<<std::endl;

    milhas = 1760 * jardas;
    std::cout<<"Milhas = "<<milhas<<std::endl;

    return 0;
}