#include <iostream>
#include <string>
#define _max 100
//DATA
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

        //dia,mes,ano teclado()
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

        //printar a data na tela - verifica se a data é valida
        void mostraData() {
            if(setDataValida(dia, mes, ano)) {
            std::cout <<"Data = "<< getDia() << "/" << getMes() << "/" << getAno()<<" ";
                if(anoBissexto(ano)) std::cout<<"(Ano Bissexto)"<<std::endl;
                else std::cout<<"(Nao Bissexto)"<<std::endl;
            }else std::cout<<"Data Invalida!\n";
        }

        //verificar ano bissexto
        bool anoBissexto (int ano) {
            bool bissexto = false;
            if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) bissexto = true;

            return bissexto;
        }
         
};

//PESSOA
class Pessoa {
    private:
        std::string nome;
        Data nascimento;
        static int qtPessoas;

    public:
        //nome teclado
        void setNome() {
            std::cout<<"Informe seu nome: "<<std::endl;
            getline(std::cin, nome);
        }

        //nome ja setado
        void setNome(std::string nome) {
            this->nome = nome;
        }

        //gets
        std::string getNome() {
            return nome;
        }

        void mostarNome() {
            std::cout << getNome();
        }

        Data setNascimento() {
            return this->nascimento;
        }
    
};
int Pessoa::qtPessoas = 0;



//MAIN
int main(void) {

    system("cls");//limpar terminal

/*
    Data *d1 = new Data();
        d1->setDia(27);//dia setado
        d1->setMes(06);//mes setado
        d1->setAno(2024);//ano setado
        std::cout<<d1->getDia()<<"/"<<d1->getMes()<<"/"<<d1->getAno();
        delete d1;

        std::cout<<std::endl;
*/
/*
    Data *d10 = new Data;
        d10->setData();//data teclado
        //d10->setDataValida()
        d10->mostraData();
*/
/*
    Pessoa *p10 = new Pessoa;
        p10->setNome("Augusto Gomes");//nome setado
        p10->setNome();//nome teclado
        p10->mostarNome();

        Pessoa::p10->nascimento();
*/
    return 0;
}