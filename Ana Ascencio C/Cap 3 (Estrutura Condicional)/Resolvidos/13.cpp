#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int op;
    float sal;

    std::cout<<"Menu de opcoes!"<<std::endl;
    std::cout<<"1-Imposto"<<std::endl<<"2-Novo Salario"<<std::endl<<"3-Classificacao"<<std::endl;
    std::cin>>op;
    std::cout<<"Informe seu salario(R$):  ";
    std::cin>>sal;

    switch(op) {
        case 1:
                if(sal < 500) std::cout<<"Imposto = R$"<<sal * 0.05;
                else if(sal >= 500 && sal <= 850) std::cout<<"Imposto = R$"<<sal * 0.1;
                else std::cout<<"Imposto = R$"<<sal * 0.15;
                break;
        case 2:
                if(sal < 450) std::cout<<"Novo salario = R$"<<sal + 100;
                else if(sal >= 450 && sal < 750) std::cout<<"Novo salario = R$"<<sal + 75;
                else if(sal >= 750 && sal <= 1500) std::cout<<"Novo salario = R$"<<sal + 50;
                else std::cout<<"Novo salario = R$"<<sal + 25;
                break;
        case 3:
                if(sal <= 700) std::cout<<"Mal remunerado";
                else std::cout<<"Bem remunerado";
    }
    std::cout<<std::endl;

    return 0;
}