#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int op;
    std::cout<<"MENU"<<std::endl;
    std::cout<<"1-Media\n2-Maior-Menor\n3-Multiplicacao\n4-Divisao"<<std::endl;
    std::cin>>op;
    float n1, n2;
    std::cout<<"Numero 1? ";
    std::cin>>n1;
    std::cout<<"Numero 2? ";
    std::cin>>n2;

    float menor, maior;
        if(n1 > n2) {
            menor = n2;
            maior = n1;
        }
        else {
            menor = n1;
            maior = n2;
        }

    switch(op) {
        case 1: std::cout<< (n1+n2)/2; break;
        case 2: std::cout<< maior-menor; break;
        case 3: std::cout<< n1*n2; break;
        case 4: if(n2 != 0) std::cout<< n1/n2;  
                else std::cout<<"Divisao impossivel"; 
                break;
        default: std::cout<<"Erro";
    }

    return 0;
}