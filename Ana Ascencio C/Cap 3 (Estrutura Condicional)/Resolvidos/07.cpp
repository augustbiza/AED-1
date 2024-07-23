#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float a, b, c;
    std::cout<<"Insira tres numeros: "<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    int i;
    std::cout<<"Valor de i?  ";
    std::cin>>i;


    switch(i){
        case 1: //decrescente
                if(a >= b && a >=c) {
                    if(b >= c) std::cout<<a<<" "<<b<<" "<<c;
                    else std::cout<<a<<" "<<c<<" "<<b;
                }
                else if(b >= a && b >=c) {
                    if(a >= c) std::cout<<b<<" "<<a<<" "<<c;
                    else std::cout<<b<<" "<<c<<" "<<a;
                }
                else if(c >= a && c >=b) {
                    if(a >= b) std::cout<<c<<" "<<a<<" "<<b;
                    else std::cout<<c<<" "<<b<<" "<<a;
                }
                break;

        case 2:  //crescente
                if(a <= b && a <=c) {
                    if(b <= c) std::cout<<a<<" "<<b<<" "<<c;
                    else std::cout<<a<<" "<<c<<" "<<b;
                }
                else if(b <= a && b <=c) {
                    if(a <= c) std::cout<<b<<" "<<a<<" "<<c;
                    else std::cout<<b<<" "<<c<<" "<<a;
                }
                else if(c <= a && c <=b) {
                    if(a <= b) std::cout<<c<<" "<<a<<" "<<b;
                    else std::cout<<c<<" "<<b<<" "<<a;
                }
                break;

        case 3:  //maior no meio
                if(a >= b && a >=c) {
                if(b >= c) std::cout<<b<<" "<<a<<" "<<c;
                else std::cout<<c<<" "<<a<<" "<<b;
            }
            else if(b >= a && b >=c) {
                if(a >= c) std::cout<<a<<" "<<b<<" "<<c;
                else std::cout<<c<<" "<<b<<" "<<a;
            }
            else if(c >= a && c >=b) {
                if(a >= b) std::cout<<a<<" "<<c<<" "<<b;
                else std::cout<<b<<" "<<c<<" "<<a;
            }
            break;

        default: std::cout<<"erro";
    }

        
    return 0;
}