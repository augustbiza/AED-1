#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int num;
    std::cout<<"Insira em numero natural:  ";
    std::cin>>num;

        if(num % 2) std::cout<<"IMPAR";     //num % 2 == 1 -> deixa resto na divisao por dois (impar)
        else std::cout<<"PAR";              //num % 2 == 0 -> resto 0 na divisao por dois (par)

    return 0;
}