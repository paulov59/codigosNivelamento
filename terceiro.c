#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    double media;
    media = nota1 + nota2 + nota3 + nota4;
    media = media/4;
    if (media >= 7) {
        printf("Aprovado!\n");
    }
    else if (media >= 5) {
        printf("Prova final!\n");
    }
    else {
        printf("Reprovado!\n");
    }
    printf("Media: %.2lf\n", media);
    return 0;
}