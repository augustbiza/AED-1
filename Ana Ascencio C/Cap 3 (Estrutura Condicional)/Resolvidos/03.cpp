#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float num1,num2;

    std::cout<<"Insira dois numeros:"<<std::endl;
    std::cin>>num1;
    std::cin>>num2;

    if(num1 == num2) std::cout<<"IGUAIS";
    else if(num1 > num2) std::cout<<num1<<" > "<<num2;
    else std::cout<<num2<<" > "<<num1;

    return 0;
}