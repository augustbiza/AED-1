#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int dia, mes, ano;

    std::cout<<"Informe o dia:  ";
    std::cin>>dia;
    std::cout<<"Informe o mes:  ";
    std::cin>>mes;
    std::cout<<"Informe o ano:  ";
    std::cin>>ano;

    std::cout<<dia<<" / ";
    switch(mes) {
        case 1: std::cout<<"janeiro / "; break;
        case 2: std::cout<<"fevereiro / "; break;
        case 3: std::cout<<"marco / "; break;
        case 4: std::cout<<"abril / "; break;
        case 5: std::cout<<"maio / "; break;
        case 6: std::cout<<"junho / "; break;
        case 7: std::cout<<"julho / "; break;
        case 8: std::cout<<"agosto / "; break;
        case 9: std::cout<<"setembro / "; break;
        case 10: std::cout<<"outubro / "; break;
        case 11: std::cout<<"novembro / "; break;
        case 12: std::cout<<"dezembro / "; break;
    }

    std::cout<<ano<<std::endl;

    return 0;
}