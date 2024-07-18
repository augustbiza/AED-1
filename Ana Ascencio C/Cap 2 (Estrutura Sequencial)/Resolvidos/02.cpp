#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float nota1, nota2, nota3, media;

    std::cout<<"Informe suas tres notas: "<<std::endl;
    std::cin>>nota1;
    std::cin>>nota2;
    std::cin>>nota3;

    media = (nota1 + nota2 + nota3) / 3;

    std::cout<<"Media = "<<media<<std::endl;

    return 0;
}