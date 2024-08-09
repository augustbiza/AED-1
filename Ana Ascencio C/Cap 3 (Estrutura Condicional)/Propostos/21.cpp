#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int codigo;
    std::cout<<"Informe o codigo do produto(1-30):  ";
    std::cin>>codigo;

    std::cout<<"Procedencia: ";
    if(codigo == 1) std::cout<<"Sul";
    else if(codigo == 2) std::cout<<"Norte";
    else if(codigo == 3) std::cout<<"Leste";
    else if(codigo == 4) std::cout<<"Oeste";
    else if(codigo > 4 && codigo < 7) std::cout<<"Nordeste";
    else if(codigo > 6 && codigo < 10) std::cout<<"Sudeste";
    else if(codigo < 9 && codigo < 21) std::cout<<"Centro-oeste";
    else std::cout<<"Nordeste";
    std::cout<<std::endl;

    return 0;
}