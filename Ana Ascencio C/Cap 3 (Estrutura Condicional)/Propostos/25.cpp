#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int horasExtra, horasFaltantes, h, grat;
    std::cout<<"Numero de horas faltantes:  ";
    std::cin>>horasFaltantes;
    std::cout<<"Numero de horas extras:  ";
    std::cin>>horasExtra;

    h = (horasExtra) - ((2*horasFaltantes)/3);
    if(h >= 2400) grat = 500;
    else if(h < 2400 && h >= 1800) grat = 400;
    else if(h < 1800 && h >= 1200) grat = 300;
    else if(h < 1200 && h >= 600) grat = 200;
    else grat = 100;

    std::cout<<"Gratificacao: R$"<<grat<<std::endl;

    return 0;
}