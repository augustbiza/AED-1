#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int a, b, c;

    std::cout<<"Informe o tres numeros a serem multiplicados: ";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    int result = a * b * c;

    std::cout<<"Resultado = "<<result<<std::endl;

    return 0;
}