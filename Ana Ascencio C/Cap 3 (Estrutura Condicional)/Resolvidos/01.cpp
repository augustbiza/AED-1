#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");

    float trabLab, AvaSem, ExFinal, media;
    std::cout<<"Informe suas notas"<<std::endl;
    std::cout<<"Trabalho de Laboratorio: ";
    std::cin>>trabLab;
    std::cout<<"Avaliacao Semestral: ";
    std::cin>>AvaSem;
    std::cout<<"Exame Final: ";
    std::cin>>ExFinal;

    media = ((trabLab * 2) + (AvaSem * 3) + (ExFinal * 5))/(10);

    std::cout<<"Conceito ";
    if(media < 5) {
        std::cout<<"E"<<std::endl;
    }
    else if(media >= 5 && media < 6) {
        std::cout<<"D"<<std::endl;
    }
    else if(media >= 6 && media < 7) {
        std::cout<<"C"<<std::endl;
    }
    else if(media >= 7 && media < 8) {
        std::cout<<"B"<<std::endl;
    }
    else if(media >= 8 && media <= 10) {
        std::cout<<"A"<<std::endl;
    }

    std::cout<<"Media = "<<media<<std::endl;

    return 0;
}