#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    system("cls");    

    int op;
    std::cout<<"MENU"<<std::endl;
    std::cout<<"1-Media\n2-Subtracao\n3-Produto"<<std::endl;
    std::cin>>op;
    float n1, n2;
    std::cout<<"Numero 1? ";
    std::cin>>n1;
    std::cout<<"Numero 2? ";
    std::cin>>n2;

    bool opValida = op >= 1 && op <=3;
        if(opValida) {
            switch(op) {
                case 1: std::cout<< (n1+n2)/2; break;
            case 2: std::cout<< n1-n2; break;
            case 3: std::cout<< n1*n2;
            }
        }
        else std::cout<<"Erro";    

    return 0;
}
