#include <stdio.h>

void leiaVal(int *pn, int *pm) {
    printf("Informe o valor inicial: ");
    scanf("%d", pn);
    printf("Informe o valor de final: ");
    scanf("%d", pm);
}

int somaLimites(int n, int m) {
    int soma;
    int inf = n;//variavel auxiliar 'inf' que guarda o valor do limite inferior para não alterar o valor de 'n' nas recursividades

    //se 'n' e 'm' forem iguais a soma dos numeros tem que ser 0
    if(n == m) {
        soma = 0;
    }
    else if(n < m) {//se 'n' e 'm' forem diferentes
        if(n == (m - 1)) {//caso base: quando 'n' e 'm' são vizinhos (ex: n=3 e m=4)
            soma = n + (n+1);//a soma dos vizinhos é a soma deles mesmos (ex: n=3 e m=4 | soma = 7)
        }
        else soma = n + somaLimites(inf+1, m);//soma = n(limite inferior fixo) +  
    }

/*exemplo
n = 1 e m = 4

soma = 1 + somaLimites(2, 4)
                soma = 1 + somaLimites(3,4)
                                soma = 1 + (3+4) -> soma = 1 + 7 -> soma = 8
                soma = 1 + 8 -> soma = 9
soma = 1 + 9 -> soma = 10

1 + 2 + 3 + 4 = 10;
*/

    return soma;
}

int main(void) {

    int n, m;
    leiaVal(&n, &m);

    int soma = somaLimites(n, m);

    if(soma > 0) {
        printf("Soma de %d ate %d = %d\n", n, m, soma);
    }
    else if(soma == 0) {
        printf("Os limites são iguais\nSoma = %d\n", soma);
    }
    
    return 0;
}
