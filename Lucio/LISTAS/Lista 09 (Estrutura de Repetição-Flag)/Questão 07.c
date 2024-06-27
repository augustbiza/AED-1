//Novos preços com flag(0-encerra)
#include <stdio.h>

int main(){

    float preco = 1, novoPreco;
    int qtProduto = 0;

    while(preco != 0){//0 - sair do programa
        do{//se o preço for negativo refaça a pergunta
            printf("Informe o valor do produto(0-sair):  ");
            scanf("%f", &preco);
        }while(preco < 0);
        
        qtProduto++;//quantidade de produtos digitados

            if(preco > 0){
                if(preco < 500){
                    novoPreco = preco * 0.3;
                }
                else if(preco >= 500 && preco <= 3000){
                    novoPreco = preco * 0.4;
                }
                else{
                    novoPreco = preco * 0.5;
                }

                printf("Novo preco = %.2f\n\n", novoPreco);
            }    
    }//fim flag

    if(qtProduto == 0){
        printf("Nenhum produto foi inserido!\n");
    }

    return 0;
}