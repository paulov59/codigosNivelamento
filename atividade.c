// Lembrando que pedi pra não considerar a possibilidade de num ser 10

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num > 10) {
        printf("%d é maior que 10\n", num);
    }
    else {
        printf("%d é menor que 10\n", num);
    }
    
}