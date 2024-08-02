#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float n1, n2;
    std::cout<<"Insira dois numeros:"<<std::endl;
    std::cin>>n1;
    std::cin>>n2;
    if(n1 > n2) std::cout<<"Maior = "<<n1;
    else std::cout<<"Maior = "<<n2;

    return 0;
}