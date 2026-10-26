#include <stdio.h>

int main() {
    float precos[10] = {150.50, 45.90, 899.99, 12.00, 320.00, 75.50, 1250.00, 230.40, 5.99, 450.00};
    int tamanho = 10;
    int i;

    printf("=== LOJA VIRTUAL - PRECOS ANTES DA ORDENACAO ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Produto %2d: R$ %.2f\n", i + 1, precos[i]);
    }

    return 0;
}
