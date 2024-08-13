#include <stdio.h>
#include <stdbool.h>

int menuPrincipal(void) {
    int op = 1;
    bool invalido = op < 0 || op > 2; 
    do {
        printf("1-Consultar\n2-Efetuar Reserva\n0-Sair\n: ");
        scanf("%d", &op);
            if(invalido) printf("Opcao Invalida!\n\n");
    } while(invalido);

    return op;
}

int menuConsulta(void) {
    int op = 0;
    bool invalido = op != 1 && op != 0;
    do {
        printf("\n1- bh-sp\n2- sp-bh\n3- bh-ma-n4- ma-bh\n5- bh-bsb\n6- bsb-bh\n0-sair\n");
        printf("Numero do voo: ");
        scanf("%d", &op);
            if(invalido) printf("Opcao Invalida!\n\n");
    } while(invalido);

    return op;
}

int menuReserva(void) {
    int numVoo;
    printf("\n1- bh-sp\n2- sp-bh\n3- bh-ma-n4- ma-bh\n5- bh-bsb\n6- bsb-bh\n0-sair\n");
    printf("Numero do voo\n: ");
    scanf("%d", &numVoo);
    
    return numVoo;
}


void consultar(int *av) {
    int i = 0;
    for(int c = 0; c < 10; c++) {
        if(av[c] == 0) i++;
    }
    if(i == 0) printf("Voo lotado\n\n");
    else printf("%d assentos livres\n\n", i);
}

void reservar(int *av) {
    int i = 0;
    for(int c = 0; c < 10 && i == 0; c++) {
        if(av[c] == 0) {
            av[c] = 1;
            i++;
        }
    }
    if(i == 0) printf("Passagens esgotadas\n\n");
}


int main(void) {

    int av1[10]={0}, av2[10]={0}, av3[10]={0}, av4[10]={0}, av5[10]={0}, av6[10]={0};
    int result = menuPrincipal();

    while(result != 0) {

        if(result == 1) {
            int op = menuConsulta();
                switch(op) {
                    case 1: consultar(av1); break;
                    case 2: consultar(av2); break;
                    case 3: consultar(av3); break;
                    case 4: consultar(av4); break;
                    case 5: consultar(av5); break;
                    case 6: consultar(av6); break;
                    default: printf("Saindo!\n");
                }
                
            } else {
            int op = menuReserva();
                switch(op) {
                    case 1: reservar(av1); break;
                    case 2: reservar(av2); break;
                    case 3: reservar(av3); break;
                    case 4: reservar(av4); break;
                    case 5: reservar(av5); break;
                    case 6: reservar(av6); break;
                    default: ;
                }                
            }

        result = menuPrincipal();

    } if(result == 0) printf("Obrigado por usar o programa!\n");


    return 0;
}