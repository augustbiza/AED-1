#include <iostream>
#include <stdlib.h>

int main(void) {
    system("cls");    

    int d1,m1,a1, d2,m2,a2;

    std::cout<<"Informe a primeira data:  ";
    std::cin>>d1;
    std::cin>>m1;
    std::cin>>a1;
    std::cout<<"Informe a segunda data:  ";
    std::cin>>d2;
    std::cin>>m2;
    std::cin>>a2;

        if(a1 == a2) {
            if(m1 == m2) {
                if(d1 == d2) std::cout<<"Datas Iguais"<<std::endl;
                else if(d1 < d2) std::cout<<d1<<"/"<<m1<<"/"<<a1<<"   "<<d2<<"/"<<m2<<"/"<<a2<<std::endl;
                else std::cout<<d2<<"/"<<m2<<"/"<<a2<<"   "<<d1<<"/"<<m1<<"/"<<a1<<std::endl;
            }
            else if(m1 < m2) std::cout<<d1<<"/"<<m1<<"/"<<a1<<"   "<<d2<<"/"<<m2<<"/"<<a2<<std::endl;
            else std::cout<<d2<<"/"<<m2<<"/"<<a2<<"   "<<d1<<"/"<<m1<<"/"<<a1<<std::endl;
        }
        else if(a1 < a2) std::cout<<d1<<"/"<<m1<<"/"<<a1<<"   "<<d2<<"/"<<m2<<"/"<<a2<<std::endl;
        else std::cout<<d2<<"/"<<m2<<"/"<<a2<<"   "<<d1<<"/"<<m1<<"/"<<a1<<std::endl;

    return 0;
}