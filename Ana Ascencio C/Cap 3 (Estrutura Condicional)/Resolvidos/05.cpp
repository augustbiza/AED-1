#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    float a, b, c, n;

    std::cout<<"Insira tres numeros em ordem crescente:"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cout<<"Insira um numero aleatorio: ";
    std::cin>>n;

        if(n >= a && n <= b) std::cout<<a<<" < "<<n<<" < "<<b<<" < "<<c;
        else if(n >= b && n <= c) std::cout<<a<<" < "<<b<<" < "<<n<<" < "<<c;
        else if(n <= a) std::cout<<n<<" < "<<a<<" < "<<b<<" < "<<c;
        else if(n >= c) std::cout<<a<<" < "<<b<<" < "<<c<<" < "<<n;

    return 0;
}