#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int cod, tempo;
    std::cout<<"Informe o tempo de servico:  ";
    std::cin>>tempo;

    float sal;
    std::cout<<"Informe o salario base:  ";
    std::cin>>sal;

    float imp;
    if(sal < 200) imp = 0;
    else if(sal >= 200 && sal <= 450) imp = sal * 0.03;
    else if(sal > 450 && sal < 700) imp = sal * 0.08;
    else imp = sal * 0.12;

    float grat;
    if(sal <= 500) {
        if(tempo <= 3) grat = 23;
        else if(tempo > 3 && tempo < 6) grat = 35;
        else grat = 33;
    }
    else {
        if(tempo <= 3) grat = 20;
        else grat = 30;
    }

    float salL = sal - imp + grat;
        if(salL <= 350) std::cout<<"A";
        else if(salL > 350 && salL <= 600) std::cout<<"B";
        else std::cout<<"C";
    std::cout<<std::endl;

    return 0;
}