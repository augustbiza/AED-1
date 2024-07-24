#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int h1,m1, h2,m2, hora = 0, min = 0;
    std::cout<<"Insira o horario inicial:  ";
    std::cin>>h1;
    std::cin>>m1;
    std::cout<<"Insira o horario final:  ";
    std::cin>>h2;
    std::cin>>m2;

    if(h1 == h2) {
        if(m1 == m2) std::cout<<"Tempo Invalido!"<<std::endl;
        if(m1 < m2) {
            min = m2 - m1;
        }
        else {
            hora = 23;
            min = 60 - (m1 - m2);
        }
    }
    
    else if(h1 > h2) {
        if(m1 == m2) {
            hora = (24 - h1) + h2;
        }
        else if(m1 < m2) {
            hora = (24 - h1) + h2;
            min = m2 - m1;
        }
        else {
            hora = (24 - h1) + h2;
            min = (60 - m1) + m2;
        }
    }
    else {
        if(m1 == m2) {
            hora = h2 - h1;
        }
        else if(m1 < m2) {
            min = m1 + m2;
            hora = h2 - (h1+1);            
        }
        else {
            hora = h2 - (h1+1);
            min = 60 - m1;
        }
    }

    std::cout<<hora<<":"<<min<<std::endl;

    return 0;
}