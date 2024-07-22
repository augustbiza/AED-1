#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float n1, n2, n3,media;

    std::cout<<"Informe a nota das tres provas:"<<std::endl;
    std::cin>>n1;
    std::cin>>n2;
    std::cin>>n3;

    media = (n1 + n2 + n3)/3;
        if(media < 3) {
            std::cout<<"REPROVADO!";
        }
        else if( media >= 3 && media< 7) {
            std::cout<<"EXAME!";
        }
        else {
            std::cout<<"APROVADO!";
        }

    return 0;
}