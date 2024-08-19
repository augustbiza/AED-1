#include <stdio.h>
#include <string.h>




int main(void) {

    char *nomes[5] = {"ana", "joao", "pedro", "maria", "carlos"};

    float sal[5] = {70, 150, 190, 370, 520};

    int tempo[5] = {1, 3, 6, 7, 10};

    for(int i = 0; i < 5; i++) {
        printf("Nome: %s\nSalario = R$%.1f\nTempo de serv: %d anos\n\n", nomes[i], sal[i], tempo[i]);
    }

    printf("Quadro de aumento\n");
    for(int i = 0; i < 5; i++) {
        if(sal[i] < 200 && tempo[i] > 5) {
            sal[i] *= 1.35;
            printf("%s - 35%%\n", nomes[i]);
        }
        else if(tempo[i] > 5) {
            sal[i] *= 1.25;
            printf("%s - 25%%\n", nomes[i]);
        }
        else if(sal[i] < 200) {
            sal[i] *= 1.15;
            printf("%s\n - 15%%", nomes[i]);
        }
    }

    printf("\nSalarios atualizados:\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Nome: %s\nSalario = R$%.1f\nTempo de serv: %d anos\n\n", nomes[i], sal[i], tempo[i]);
    }

    return 0;
}