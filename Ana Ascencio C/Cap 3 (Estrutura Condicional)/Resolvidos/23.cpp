#include <iostream>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    system("cls");    

    float salM;
    char turno, categ;
    int horas;

    std::cout<<"Informe o salario minimo(R$):  ";
    std::cin>>salM;
    std::cout<<"Informe o turno de trabalho(M-matutino/V-vespertino/N-noturno):  ";
    std::cin>>turno;
    turno = toupper(turno);
    std::cout<<"Informe a categoria(O-operario/G-gerente):  ";
    std::cin>>categ;
    categ = toupper(categ);
    std::cout<<"Informe o  numero de horas trabalhadas:  ";
    std::cin>>horas;

    float salB, coef;
        if(turno == 'M') coef = salM * 0.1;
        else if(turno == 'V') coef = salM * 0.1;
        else if(turno == 'N') coef = salM * 0.1;
        salB = horas * coef;

    float imp;
        if(categ == 'O') {
            if(salB >= 300) imp = salB * 0.05;
            else imp = salB * 0.03;
        }
        else if(categ == 'G') {
            if(salB >= 400) imp = salB * 0.06;
            else imp = salB * 0.04;
        }
        else if(categ == 'O');

    int grat;
        if(turno == 'N' && horas > 80) grat = 50;
        else grat = 30;

    int aux;
        if(categ == 'O' || coef <= 25) aux = salB/3;
        else aux = salB/2;

    float salL = salB + grat + aux - imp;
        if(salL < 350) std::cout<<"Mau remunerado";
        else if(salL >= 350 && salL <= 600) std::cout<<"Normal";
        else std::cout<<"Bem remunerado";

    std::cout<<std::endl;

    return 0;
}