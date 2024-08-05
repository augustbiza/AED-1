#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float custoFab, custoFinal, imp, dist;
    std::cout<<"Informe o valor(R$) do custo de fabrica:  ";
    std::cin>>custoFab;

    if(custoFab > 25000) {
        imp = custoFab * 0.2;
        dist = custoFab * 0.15;
    }
    else if(custoFab <= 25000 && custoFab > 12000) {
        imp = custoFab * 0.15;
        dist = custoFab * 0.1;
    }
    else {
        imp = 0;
        dist = custoFab * 0.05;
    }

    custoFinal = custoFab + imp + dist;
    std::cout<<"Preco = R$"<<custoFinal<<std::endl;
    return 0;
}