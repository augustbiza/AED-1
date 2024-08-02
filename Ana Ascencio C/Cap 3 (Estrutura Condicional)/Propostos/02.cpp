#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float n1, n2, media;
    std::cout<<"Informe as duas notas:"<<std::endl;
    std::cin>>n1;
    std::cin>>n2;

    media = (n1+n2)/2;
    if(media < 4) std::cout<<"Reprovado";
    else if(media >= 4 && media < 7) std::cout<<"Exame";
    else std::cout<<"Aprovado";

    return 0;
}