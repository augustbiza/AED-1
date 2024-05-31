//Maior preço --> ate 2000 e a partir de 2000 com flag(0-encerra)
#include <stdio.h>

int main(){

    float preco = 1, maiorAteDoisMil = 0 , maiorAposDoisMi = 0;

    while(preco != 0){
        do{//enquanto o preço for menor que '0' refaça a pergunta
            printf("Informe o preco(0-sair):  ");
            scanf("%f", &preco);
        }while(preco < 0);

        if(preco > 0){//se o preco nao for '0' faca os calculos
            if(preco <= 2000){//maior preco -2000
                if(maiorAteDoisMil < preco){
                    maiorAteDoisMil = preco;
                }
            }
            else{//maior preco +2000
                if(maiorAposDoisMi < preco){
                    maiorAposDoisMi = preco;
                }
            }
        }//fim dos calculos 
    }//fim flag

    printf("Maior preco!\nAte 2000 = %.2f\nApos 2000 = %.2f\n", maiorAteDoisMil, maiorAposDoisMi);

    return 0;
}