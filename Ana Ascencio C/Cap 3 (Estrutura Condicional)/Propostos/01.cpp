#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float n1, n2, n3, n4, media;
    std::cout<<"Informe as quatro notas: "<<std::endl;
    std::cin>>n1;
    std::cin>>n2;
    std::cin>>n3;
    std::cin>>n4;

    media = (n1+n2+n3+n4)/4;
    if(media >= 7) std::cout<<"Aprovado";
    else std::cout<<"Reprovado";

    return 0;
}