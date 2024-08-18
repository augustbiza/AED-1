#include <stdio.h>
#include <stdbool.h>

void lerKm(char *model[5], float *kmh) {
    for(int c = 0; c < 5; c++) {
        printf("%s: ", model[c]);
        scanf("%f", &kmh[c]);
    }
}

void detalhes(char *model[5], float *kmh) {
    int posMaior = 0, posMenor = 0;
    float maisEco = kmh[0], menosEco = kmh[0];

    for(int c = 1; c < 5; c++) {
        if(kmh[c] < menosEco) {
            menosEco = kmh[c];
            posMenor = c;
        }
        if(kmh[c] > maisEco) {
            maisEco = kmh[c];
            posMaior = c;
        }
    }

    printf("Mais economico\n%s: %.1f\n", model[posMaior], maisEco);
    printf("Menos economico\n%s: %.1f\n", model[posMenor], menosEco);

}

int main(void) {

    char *model[5] = {"Fusca", "Gol", "Kombi", "Corola", "Onix"};
    float kmh[5] = {0};

    lerKm(model, kmh);
    detalhes(model, kmh);

}