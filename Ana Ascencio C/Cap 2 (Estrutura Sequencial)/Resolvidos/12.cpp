#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int base, exp;
    
    std::cout<<"Informe a base e o expoente:"<<std::endl;
    std::cin>>base;
    std::cin>>exp;

    long int result = 1;

    for (int c = 0; c < exp; c++) {
        result *= base; 
    }

    std::cout<<"Resultado = "<<result<<std::endl;

    return 0;
}