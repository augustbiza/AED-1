#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float cateto1, cateto2, hipotenusa;

    
    std::cout<<"Informe o valor do primeiro cateto:  ";
    std::cin>>cateto1;
    std::cout<<"Informe o valor do segundo cateto:  ";
    std::cin>>cateto2;

    hipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2));

    std::cout<<"Triangulo:  "<<cateto1<<" "<<cateto2<<" "<<hipotenusa<<std::endl;

    return 0;
}