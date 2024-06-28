#include <iostream>
#define _max 100

class Data {
    private:
        int dia, mes, ano;

    public:
        //dia,mes,ano já setados(1)
        void setDia(int dia) {
            this->dia = dia;
        }
        void setMes(int mes) {
            this->mes = mes;
        }
        void setAno(int ano) {
            this->ano = ano;
        }

        //dia,mes,ano NÃO setados
        void setData() {
            std::cout<<"Insira uma data: ";
            std::cin>>dia;
            std::cin>>mes;
            std::cin>>ano;
        }

        //gets
        

        int getDia() {
            return dia;
        }
        int getMes() {
            return mes;
        }
        int getAno() {
            return ano;
        }

        //verificar data invalida
        bool setDataValida(int dia, int mes, int ano) {
            bool dataValida = false;
                if((dia >= 1 && dia <= 30) && (mes >= 1 && mes <= 12) ) {
                    dataValida = true;

                    bool anoBissexto(ano);
                }
            return dataValida;
        }

        //printar a data na tela
        void mostraData() {
            if(setDataValida(dia, mes, ano))
            std::cout << getDia() << "/" << getMes() << "/" << getAno();
            else std::cout<<"Data Invalida!\n";
        }

        //verificar ano bissexto
        bool anoBissexto (int ano) {
            bool bissexto = false;
            if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) bissexto = true;

            return bissexto;
        }
         
};




int main(void) {

    system("cls");
/*
    Data d0;
        d0.setDia(27);
        d0.setMes(06);
        d0.setAno(2024);
        std::cout<<d0.getDia()<<"/"<<d0.getMes()<<"/"<<d0.getAno();

        std::cout<<std::endl;
*/

/*
    Data *d1 = new Data();
        d1->setDia(27);
        d1->setMes(06);
        d1->setAno(2024);
        std::cout<<d1->getDia()<<"/"<<d1->getMes()<<"/"<<d1->getAno();
        delete d1;

        std::cout<<std::endl;
*/

    Data *d10 = new Data;
    d10->setData();
    d10->mostraData();

    return 0;
}