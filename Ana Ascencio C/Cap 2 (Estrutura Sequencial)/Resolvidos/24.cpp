#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float recebe, m, s;
    int h;

    std::cout<<"Informe a hora:  ";
    std::cin>>recebe;

    h = recebe;     //hora parte inteira
    m = (recebe - h);       //hora parte fracionaria

    h *= 3600;      //multiplica h por 3600 para saber quantos segundos tem em h horas
    m *= 3600;      //multiplica m por 3600 para saber quantos segundos tem em m horas

    s = h + m;
    
    std::cout<<s<<" segundos"<<std::endl;

    return 0;
}