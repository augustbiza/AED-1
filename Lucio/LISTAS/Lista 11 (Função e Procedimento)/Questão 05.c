//POTENCIAÇÃO UTILIZANDO FUNÇÃO
#include<stdio.h>

void titulo(){
    printf("Potenciacao!\n");
}

float leiaBase(){
    float base;
    printf("Digite o valor da base: ");
    scanf("%f", &base);

    return base;
}

int leiaExpoente(){
    int exp;
    do{
        printf("Digite o valor do expoente: ");
        scanf("%i", &exp);
    }while(exp < 0);
    

    return exp;
}

float calculaPotencia(int base, float exp){
    float pot = 1;
        for(int c = 0; c < exp; c++){
            pot *= base;
        }

    return pot;
}

int main(){

    titulo();

    float base = leiaBase();
    int expoente = leiaExpoente();

    float potencia = calculaPotencia(base, expoente);
    
    printf("%.1f ^ %i = %.2f", base, expoente, potencia);

    return 0;
}