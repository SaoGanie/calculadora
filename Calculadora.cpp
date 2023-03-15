#include <stdio.h>

float calcula(float valor_inicial, float margem_lucro);

int main() {
    char resposta;
    float valor_inicial, margem_lucro, valor_final;

    do {
        printf("Informe o valor inicial do produto: ");
        scanf("%f", &valor_inicial);
        printf("Informe a margem de lucro desejada (em porcentagem): ");
        scanf("%f", &margem_lucro);

        // c�lculo do valor de venda
        valor_final = calcula(valor_inicial, margem_lucro);

        // exibi��o do resultado
        printf("O valor de venda do produto com margem de lucro de %.2f%% e acr�scimo de 5%% � R$ %.2f \n", margem_lucro, valor_final);

        printf("Deseja continuar? s/n\n");
        scanf(" %c", &resposta);
    } while (resposta == 's');

    return 0;
}

float calcula(float valor_inicial, float margem_lucro) {
    float valor_venda = valor_inicial * (1 + (margem_lucro / 100));
    float valor_final = valor_venda / 0.95;
    return valor_final;
}

