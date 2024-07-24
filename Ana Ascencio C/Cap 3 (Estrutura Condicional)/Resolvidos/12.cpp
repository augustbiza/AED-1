#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float sal, novoSal;
    int cargo;

    std::cout<<"Informe o codigo(1-5):  ";
    std::cin>>cargo;
    std::cout<<"Informe seu salario:  ";
    std::cin>>sal;

        switch(cargo) {
            case 1:
                    std::cout<<"Escrituario"<<std::endl;
                    novoSal = sal * 1.5;
                    break;
             case 2:
                    std::cout<<"Secretario"<<std::endl;
                    novoSal = sal * 1.35;
                    break;
             case 3:
                    std::cout<<"Caixa"<<std::endl;
                    novoSal = sal * 1.2;
                    break;
             case 4:
                    std::cout<<"Gerente"<<std::endl;
                    novoSal = sal * 1.1;
                    break;
             case 5:
                    std::cout<<"Diretor"<<std::endl;
                    novoSal = sal;
                    break;
        }

        if(cargo > 0 && cargo < 5) {
            std::cout<<"Novo Salario = R$"<<novoSal<<std::endl;
        }
        else {
            std::cout<<"Nao houve alteracao no salario"<<std::endl;
            std::cout<<"Salario = R$"<<sal<<std::endl;
        }
        

    return 0;
}