#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float a, b, c, x1, x2, discriminante;
    std::cout<<"Informe o valor de a:  ";
    std::cin>>a;
    std::cout<<"Informe o valor de b:  ";
    std::cin>>b;
    std::cout<<"Informe o valor de c:  ";
    std::cin>>c;

    discriminante = (b*b)-(4*a*c);
    
    if(a != 0) {
        if(discriminante < 0) std::cout<<"Nao existe raiz real"<<std::endl;    //delta < 0
        else if (discriminante == 0) {  //delta = 0
            x1 = -b/(2*a);
            std::cout<<"Duas raizes reais iguais"<<std::endl;
            std::cout<<"x = "<<x1<<std::endl;
        }
        else {  //delta > 0
            x1 = (-b + std::sqrt(discriminante)) / (2*a);
            x2 = (-b - std::sqrt(discriminante)) / (2*a);
            std::cout<<"Duas raizes reais diferentes"<<std::endl;
            std::cout<<"x1 = "<<x1<<std::endl;
            std::cout<<"x2 = "<<x2;
        }
    }
    else std::cout<<"Valor de a nao pode ser 0";

    return 0;
}
//ta bugada