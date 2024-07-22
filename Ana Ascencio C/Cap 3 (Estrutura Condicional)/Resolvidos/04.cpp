#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float a, b, c;

    std::cout<<"Insira tres numeros:"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

        //a=b=c
        if(a == b && a == c) std::cout<< a <<" = "<< b <<" = "<< c <<std::endl;
        //maior = a
        else if(a > b && a > c) {
            if(b > c) std::cout<< a <<" > "<< b <<" > "<< c <<std::endl;
            else if(b == c) std::cout<< a <<" > "<< b <<" = "<< c <<std::endl; 
            else std::cout<< a <<" > "<< c <<" > "<< b <<std::endl;
        }
        //maior = b
        else if(b > a && b > c) {
            if(a > c) std::cout<< b <<" > "<< a <<" > "<< c <<std::endl;
            else if(a == c) std::cout<< b <<" > "<< a <<" = "<< c <<std::endl;
            else std::cout<< b <<" > "<< c <<" > "<< a <<std::endl;
        }
        //maior = c
        else if(c > a && c > b) {
            if(a > b) std::cout<< c <<" > "<< a <<" > "<< b <<std::endl;
            else if(a == b) std::cout<< c <<" > "<< a <<" = "<< b <<std::endl;
            else std::cout<< c <<" > "<< b <<" > "<< a <<std::endl;
        }

    return 0;
}