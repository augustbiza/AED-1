#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(void) {
    system("cls");    

    float anoI = 1996, anoAtu, sal = 1000;

    std::cout<<"Ano atual: ";
    std::cin>>anoAtu;

    while(anoI <= anoAtu) {
        sal += sal*0.015;
        anoI++;
    }
    //sal *= pow(2,anoAtu-anoI);

    std::cout<<"Salario = R$"<<sal<<std::endl;

    return 0;
}

/*

1995 = 1000
1996 = 1000 +* 0.015^1
1997 = (1000 +* 0.015^1)*1.5
1998 = ((1000 +* 0.015^1)*1.5)*1.5








*/